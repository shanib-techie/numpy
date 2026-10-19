// script.js
// Handles the Check Resume form: sends the resume + keywords to FastAPI
// and displays the returned results on the page, without reloading.

document.addEventListener("DOMContentLoaded", function () {
  const form = document.getElementById("resume-form");

  // If this page doesn't have the form (e.g. home/about page), stop here.
  if (!form) return;

  const statusContainer = document.getElementById("status-container");
  const resultSection = document.getElementById("result-section");

  form.addEventListener("submit", async function (event) {
    event.preventDefault(); // Stop the normal page reload on submit

    const fileInput = document.getElementById("resume-file");
    const keywordsInput = document.getElementById("keywords");

    // Basic front-end checks before even sending the request
    if (!fileInput.files || fileInput.files.length === 0) {
      showStatus("Please select a resume file (PDF or DOCX).", "error");
      return;
    }

    if (!keywordsInput.value.trim()) {
      showStatus("Please enter at least one keyword.", "error");
      return;
    }

    // Build the form data to send to the backend
    const formData = new FormData();
    formData.append("resume", fileInput.files[0]);
    formData.append("keywords", keywordsInput.value);

    // Show a loading message and hide any previous result
    showStatus("Analyzing your resume...", "loading");
    resultSection.classList.add("hidden");

    try {
      const response = await fetch("/api/check-resume", {
        method: "POST",
        body: formData,
      });

      const data = await response.json();

      if (!response.ok) {
        // FastAPI sends errors as { "detail": "message" }
        const errorMessage = data.detail || "Something went wrong. Please try again.";
        showStatus(errorMessage, "error");
        return;
      }

      clearStatus();
      displayResult(data);
    } catch (error) {
      showStatus("Could not connect to the server. Please try again.", "error");
    }
  });

  function showStatus(message, type) {
    statusContainer.innerHTML =
      '<div class="status-message ' + type + '">' + message + "</div>";
  }

  function clearStatus() {
    statusContainer.innerHTML = "";
  }

  function displayResult(data) {
    // Score number at the top
    document.getElementById("score-number").textContent = data.match_percentage + "%";

    // Meta info grid (filename, file type, counts, etc.)
    const metaContainer = document.getElementById("result-meta");
    metaContainer.innerHTML = "";
    const metaItems = [
      { label: "Resume File", value: data.filename },
      { label: "File Type", value: data.file_type },
      { label: "Total Keywords", value: data.total_keywords },
      { label: "Keyword Match", value: data.matched_count + " / " + data.total_keywords },
      { label: "Matched", value: data.matched_count },
      { label: "Missing", value: data.missing_count },
    ];

    metaItems.forEach(function (item) {
      const div = document.createElement("div");
      div.className = "meta-item";
      div.innerHTML =
        '<div class="label">' + item.label + '</div>' +
        '<div class="value">' + item.value + '</div>';
      metaContainer.appendChild(div);
    });

    // Matched keywords
    const matchedContainer = document.getElementById("matched-keywords");
    matchedContainer.innerHTML = "";
    if (data.matched_keywords.length === 0) {
      matchedContainer.innerHTML = '<p class="hint">No matched keywords.</p>';
    } else {
      data.matched_keywords.forEach(function (keyword) {
        const pill = document.createElement("span");
        pill.className = "keyword-pill matched";
        pill.textContent = "✓ " + keyword;
        matchedContainer.appendChild(pill);
      });
    }

    // Missing keywords
    const missingContainer = document.getElementById("missing-keywords");
    missingContainer.innerHTML = "";
    if (data.missing_keywords.length === 0) {
      missingContainer.innerHTML = '<p class="hint">No missing keywords.</p>';
    } else {
      data.missing_keywords.forEach(function (keyword) {
        const pill = document.createElement("span");
        pill.className = "keyword-pill missing";
        pill.textContent = "✗ " + keyword;
        missingContainer.appendChild(pill);
      });
    }

    // Suggestions
    const suggestionsList = document.getElementById("suggestions-list");
    suggestionsList.innerHTML = "";
    data.suggestions.forEach(function (suggestion) {
      const li = document.createElement("li");
      li.textContent = suggestion;
      suggestionsList.appendChild(li);
    });

    // Show the result section
    resultSection.classList.remove("hidden");
    resultSection.scrollIntoView({ behavior: "smooth" });
  }
});
