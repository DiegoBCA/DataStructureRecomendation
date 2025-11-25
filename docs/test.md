# Manual Test Plan

This document outlines two manual test cases designed to validate that the system recommends the correct data structure based on different logical paths.

---

## 🧪 Test Case 1: Graph Structure Validation
**Objective:** Verify that the system correctly detects the need for a complex relational structure.

**Execution Steps:**
1. Start the program (`./decision_system`).
2. **Question 1** appears: "1. ¿Los datos representan relaciones complejas tipo red...?" (Do data represent complex network relationships?)
3. **User Action:** Enter `s` (Yes) and press Enter.

**Expected Result:**
* The system should NOT ask any further questions.
* The system must display the block "**STRUCTURE: GRAPH**".
* The ASCII illustration of connected nodes must appear.
* It must display the justification: "Data describes relationships instead of sequences".

**Status:** [PASSED]

---

## 🧪 Test Case 2: Stack Validation (LIFO Path)
**Objective:** Verify that the system correctly navigates the discard branches (Not Graph -> Not Tree) to reach a strict linear structure.

**Execution Steps:**
1. Start the program (`./decision_system`).
2. **Question 1** (Relations): Enter `n` (No).
3. **Question 2** (Hierarchy/Order): Enter `n` (No).
4. **Question 5** (Strict Order LIFO/FIFO): Enter `s` (Yes).
5. **Question 6** (Last-In First-Out): Enter `s` (Yes).

**Expected Result:**
* The system must recommend "**STRUCTURE: STACK**".
* It must display the illustration of a vertical stack.
* It must display the pseudocode for `push` and `pop`.
* The justification must state: "Most recent element must be removed first".

**Status:** [PASSED]
