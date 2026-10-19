# ResumeLens

Resume skill matcher with a searchable skill database, FastAPI backend and web UI.

- Search skills (typos tolerated) or add whole fields (Data Science, Graphic Design, Commerce, Mechanical...)
- Skills not in the database are still searched in the resume
- Upload PDF, DOCX, or a ZIP of many resumes; ranked results
- Download a ZIP report (JSON, CSV, per-resume TXT)

## Run
```
pip install -r requirements.txt
uvicorn main:app --reload
```
Open http://127.0.0.1:8000

## Add skills
Edit `resume_checker/skills_db.py` and add names to any group in `SKILL_GROUPS`.

## Structure
```
main.py                      FastAPI routes
resume_checker/skills_db.py  skill groups + suggest()
resume_checker/resume_checker.py  extract text + match + score
frontend/                    index, check-resume, about, css, js
```
