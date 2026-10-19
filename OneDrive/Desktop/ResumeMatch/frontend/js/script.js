const $ = id => document.getElementById(id);
const picked = new Map();            // name(lower) -> {name, custom}
let files = [], lastResults = [], act = -1, items = [], timer;

function el(tag, cls, text, attrs = {}) {
  const e = document.createElement(tag);
  if (cls) e.className = cls;
  if (text != null) e.textContent = text;
  Object.entries(attrs).forEach(([k, v]) => e.setAttribute(k, v));
  return e;
}

// ---------- skills ----------
function addSkill(name, custom = false) {
  name = name.trim();
  if (!name || picked.has(name.toLowerCase())) return;
  picked.set(name.toLowerCase(), { name, custom });
  renderPicked();
}
function renderPicked() {
  const box = $("picked"); box.replaceChildren();
  picked.forEach((s, k) => {
    const c = el("button", "chip" + (s.custom ? " custom" : ""), s.name + "  ×",
      { title: s.custom ? "Custom skill (searched as typed)" : "Remove" });
    c.onclick = () => { picked.delete(k); renderPicked(); };
    box.append(c);
  });
}
function closeSugg() { $("sugg").hidden = true; act = -1; }

async function search(q) {
  if (!q.trim()) return closeSugg();
  const r = await (await fetch("/api/suggest?q=" + encodeURIComponent(q))).json();
  items = [
    ...r.groups.map(g => ({ type: "group", name: g.name, count: g.count })),
    ...r.skills.map(s => ({ type: "skill", name: s.skill, group: s.group })),
  ];
  const box = $("sugg"); box.replaceChildren(); act = -1;
  items.forEach((it, i) => {
    const d = el("div");
    if (it.type === "group") d.append(el("span", "grp", `Add all ${it.count} ${it.name} skills`));
    else d.append(el("span", "", it.name), el("small", "", it.group));
    d.onmousedown = e => { e.preventDefault(); choose(i); };
    box.append(d);
  });
  if (!items.length) box.append(el("div", "", `No match. Press Enter to add "${q.trim()}" as a custom skill`));
  box.hidden = false;
}
async function addGroup(name) {
  const data = await (await fetch("/api/groups")).json();
  (data.groups[name] || []).forEach(s => addSkill(s));
}
function choose(i) {
  const it = items[i]; if (!it) return;
  it.type === "group" ? addGroup(it.name) : addSkill(it.name);
  $("q").value = ""; closeSugg();
}
$("q").addEventListener("input", e => { clearTimeout(timer); timer = setTimeout(() => search(e.target.value), 150); });
$("q").addEventListener("keydown", e => {
  const rows = [...$("sugg").children];
  if (e.key === "ArrowDown" && items.length) act = (act + 1) % items.length;
  else if (e.key === "ArrowUp" && items.length) act = (act - 1 + items.length) % items.length;
  else if (e.key === "Enter") {
    e.preventDefault();
    if (act >= 0) choose(act);
    else { e.target.value.split(",").forEach(s => addSkill(s, true)); e.target.value = ""; closeSugg(); }
    return;
  } else if (e.key === "Escape") return closeSugg();
  else return;
  e.preventDefault(); rows.forEach((r, i) => r.classList.toggle("act", i === act));
});
$("q").addEventListener("blur", () => setTimeout(closeSugg, 100));

(async () => {                       // browse by field
  const data = await (await fetch("/api/groups")).json();
  $("browseHead").textContent = `Or browse ${data.total} skills by field`;
  Object.entries(data.groups).forEach(([g, list]) => {
    const b = el("button", "gbtn", `${g} (${list.length})`);
    b.onclick = () => {
      document.querySelectorAll(".gbtn").forEach(x => x.classList.remove("on")); b.classList.add("on");
      const box = $("groupSkills"); box.replaceChildren();
      const all = el("button", "btn ghost", "Add all"); all.onclick = () => list.forEach(s => addSkill(s));
      box.append(all);
      list.forEach(s => { const c = el("button", "chip", "+ " + s); c.onclick = () => addSkill(s); box.append(c); });
    };
    $("groups").append(b);
  });
})();

// ---------- files ----------
function setFiles(list) { files = [...list]; $("fileInfo").textContent = files.map(f => f.name).join(", "); }
$("file").onchange = e => setFiles(e.target.files);
["dragover", "dragenter"].forEach(t => $("drop").addEventListener(t, e => { e.preventDefault(); $("drop").classList.add("over"); }));
["dragleave", "drop"].forEach(t => $("drop").addEventListener(t, () => $("drop").classList.remove("over")));
$("drop").addEventListener("drop", e => { e.preventDefault(); setFiles(e.dataTransfer.files); });

// ---------- analyze ----------
$("go").onclick = async () => {
  $("status").className = "mute";
  if (!files.length) return ($("status").textContent = "Upload a resume first.");
  if (!picked.size) return ($("status").textContent = "Add at least one skill.");
  $("go").disabled = true; $("status").textContent = "Checking...";
  const fd = new FormData();
  files.forEach(f => fd.append("files", f));
  fd.append("skills", [...picked.values()].map(s => s.name).join(","));
  try {
    const res = await fetch("/api/analyze", { method: "POST", body: fd });
    if (!res.ok) throw new Error((await res.json()).detail || "Request failed");
    lastResults = (await res.json()).results; render(lastResults); $("status").textContent = "";
  } catch (e) { $("status").textContent = e.message; $("status").className = "err"; }
  $("go").disabled = false;
};

function chips(list, cls) {
  const w = el("div", "chips");
  list.forEach(m => w.append(el("span", `chip static ${cls}`, m.skill + (m.match === "fuzzy" ? " (close spelling)" : ""))));
  return w;
}
function render(results) {
  const box = $("results"); box.replaceChildren();
  results.forEach(r => {
    const c = el("div", "card");
    const head = el("div", "row"); head.append(el("b", "", r.filename));
    if (r.error) { c.append(head, el("p", "err", r.error)); box.append(c); return; }
    head.append(el("span", "score", r.match_percent + "%"));
    const bar = el("div", "bar"); const i = el("i"); i.style.width = r.match_percent + "%"; bar.append(i);
    c.append(head, bar, el("p", "mute", `${r.verdict}. ${r.matched.length} of ${r.total} skills found.`));
    c.append(el("b", "", "Matched"), chips(r.matched, "ok"), el("b", "", "Missing"), chips(r.missing, "bad"));
    const ul = el("ul"); r.suggestions.forEach(t => ul.append(el("li", "", t)));
    c.append(el("b", "", "Suggestions"), ul); box.append(c);
  });
  const z = el("button", "btn ghost", "Download report (.zip)");
  z.onclick = async () => {
    const res = await fetch("/api/report-zip", { method: "POST", headers: { "Content-Type": "application/json" }, body: JSON.stringify({ results: lastResults }) });
    el("a", "", "", { href: URL.createObjectURL(await res.blob()), download: "resumelens_report.zip" }).click();
  };
  box.append(z);
}
