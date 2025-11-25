# Data Structure Guided Decision System

**Team:** 
María Fernanda Sierra Guzmán - 179422
Axel Chávez Hernández - 180999
Diego Bedolla Carrillo - 181439

**Course:** Data Structure Course
**Date:** November 2025

## 📖 Overview
[cite_start]This project implements a **Guided Decision System** designed to assist developers and students in selecting the most appropriate data structure for a specific problem[cite: 5, 7].

[cite_start]Through a sequence of 6 to 8 interactive questions regarding data behavior and performance constraints, the system analyzes the answers and recommends a structure (such as Arrays, Linked Lists, BSTs, Graphs, etc.)[cite: 23].

[cite_start]The system not only provides the name of the structure but also offers a complete educational context [cite: 8-12]:
1.  **Rationale:** Why was this structure chosen?
2.  **Illustration:** Visual representation (ASCII Art).
3.  **Pseudocode:** Main algorithms with Big-O complexity.
4.  **Real Example:** A practical use case based on academic assignments.

## ✨ Features
* [cite_start]**Robust Decision Logic:** Distinguishes between linear, hierarchical, and relational structures[cite: 31].
* [cite_start]**Broad Coverage:** Supports Arrays, Lists (Simple/Circular), Stacks, Queues, BST, AVL, Heaps, and Graphs[cite: 33].
* [cite_start]**Integrated Visualization:** Displays ASCII diagrams directly in the console[cite: 37].
* [cite_start]**Run-Anywhere:** Written in standard C, compatible with Windows, Linux, and macOS[cite: 46].
* **Automation Script:** Includes `run.bat` for quick execution on Windows.

## 📂 Project Structure
[cite_start]The repository structure follows software engineering standards[cite: 51]:

* `/src`: Source code (`main.c`, `results.c`, `results.h`).
* `/docs`: Documentation for decision logic and the questionnaire.
* `/diagrams`: Visual resources and demo screenshots.
* `/example`: Detailed documentation of the use case ("Homework Example").
* `/tests`: Test cases and validation plans.

## 🚀 Run Instructions (Native)

### Prerequisites
* **GCC** Compiler installed (MinGW on Windows, or build-essential on Linux).

### Option A: Quick Run (Windows)
Simply double-click the `run.bat` file located in the project root. This will automatically compile and execute the program.

### Option B: Manual Compilation (Any OS)
Open your terminal in the project's root folder and run:

**1. Compile:**
```bash
gcc src/main.c src/results.c -o decision_system
