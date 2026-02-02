# EduHub: Academic Performance & Portal System

A robust C++ Desktop Application built with the **Qt Framework** for comprehensive student record management. This project demonstrates the evolution of a software system from basic file handling to a multi-user portal architecture using Object-Oriented Programming (OOP).

##  Project Overview
This system allows for the management of student academic lifecycles, including entrance credentials (SSC/HSSC), assessment tracking (Quizzes, Assignments, Exams), and real-time GPA analytics.

### Key Features
- **Dual Portal System:** Separate interfaces for Teachers (Data Entry/Management) and Students (View-only Dashboard).
- **Academic Tracking:** Manage Quizzes, Assignments, Mid-terms, and Final Exam marks.
- **Dynamic Filtering:** Sort and filter student records based on GPA thresholds.
- **Multi-Format Data Persistence:** Integration of Excel (CSV) and Text-based file handling.

##  Evolution & Architecture

### Phase 1: The Foundation (CP Semester)
Focus was placed on functional requirements and basic GUI development.
- **Data Handling:** Implemented Excel sheet integration for core educational data (Name, Enrollment, CGPA, SSC/HSSC) and Text files for personal details.
- **Functionality:** Built the core GPA calculation and filtration logic.

### Phase 2: The OOP Upgrade (OOP Semester)
The system was refactored to prioritize security, modularity, and user roles.
- **Refactoring:** Converted procedural code into Class-based architecture using Encapsulation and Inheritance.
- **The Portal System:** Introduced the **Teacher Portal**, allowing faculty to securely insert assessment data (Quizzes/Mids/Finals) stored via text file handling.
- **User Access Control:** Implemented logic to ensure students can only access their specific data.

##  Technical Stack
- **Language:** C++
- **Framework:** Qt (Signals & Slots, QWidgets)
- **Data Storage:** - **Excel (CSV):** Core academic credentials.
  - **Flat Files (.txt):** Assessment marks and personal details.
- **Concepts:** OOP (Inheritance, Encapsulation), File I/O, Sorting Algorithms.

##  Installation & Setup
1. Clone the repository: `git clone https://github.com/yourusername/Student-Management-Portal.git`
2. Open the `.pro` file in **Qt Creator**.
3. Ensure the `/data` and `/database` folders contain the required `.csv` and `.txt` files.
4. Build and Run.


*Developed as a University Project exploring Software Engineering and Object-Oriented Design.*
