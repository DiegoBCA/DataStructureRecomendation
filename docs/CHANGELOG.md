# CHANGELOG  
Project log for the Data Structure Decision System.  
This document summarizes the evolution of the project from its initial planning to the final deliverable, including design decisions, technical updates, team milestones, and improvements.

---

## [1.0.0]  
Final Deliverable Version

### Added
- Complete implementation of the interactive decision system in C.
- Final version of the questionnaire consisting of eight key questions addressing:
  - Complex, network-like relationships  
  - Hierarchical and ordered data  
  - Priority-based access  
  - Balanced versus unbalanced tree behavior  
  - Strict insertion/deletion order  
  - LIFO/FIFO rules  
  - Direct index-based access  
  - Dynamic versus fixed-size data structures  
- Full `results.c` module containing documentation and output for nine data structures:
  - Array  
  - Linked List  
  - Circular Linked List  
  - Stack  
  - Queue  
  - Binary Search Tree (BST)  
  - AVL Tree  
  - Heap  
  - Graph  
- Spanish descriptions for user-facing messages, with pseudocode and examples preserved in English.
- ASCII-based illustrations for each structure.
- Final alignment between questionnaire logic and recommendation justifications.
- `results.h` containing declarations for all output functions.
- Integration of all modules into `main.c`.

### Modified
- Rewritten descriptive sections, reasons for recommendation, and alternatives in `results.c` to match the final decision tree.
- Standardized console output formatting, including headers, spacing, and section layout.
- Updated system text to Spanish to match the questionnaire flow.
- Unified terminology across all modules for clarity and consistency.

### Fixed
- Improved input handling using lowercase conversion for better user interaction.
- Corrected spacing, punctuation, and accented characters in printed messages.
- Removal of outdated prototypes and placeholder examples.
- Minor compatibility adjustments to ensure clean compilation.

---

## [0.9.0]  
Integration and Consolidation Phase

### Added
- First functional version of the full questionnaire.
- Completed decision tree mapping each answer route to a specific structure.
- Initial version of `results.c` with draft descriptions.
- Internal documentation of decision rules and flow logic.
- Team-wide review adjusting which data structures to include.

### Modified
- Refined question wording to reduce ambiguity between similar structures.
- Adjusted decision logic to prevent dead ends and ensure a unique recommendation.
- Improved coherence between `main.c`, `results.c`, and `results.h`.

### Testing
- Initial testing conducted through manual console trials.
- Verification of key scenarios:
  - All-negative answer patterns.
  - Hierarchical paths leading to BST/AVL/Heap.
  - Linear structure paths including Stack, Queue, Arrays, and Lists.

---

## [0.5.0]  
Early Development Phase

### Added
- Initial repository structure including core directories and files.
- First draft of the questionnaire.
- Definition of the system's main objective:
  “Create a program that recommends the most suitable data structure based on user requirements.”
- Base implementation of:
  - `askQuestion`
  - Initial decision logic skeleton
  - Early prototype messages and placeholders

### Modified
- Reorganized decision branches to avoid unused or ambiguous paths.
- Improved user input validation and handling.
- Added preliminary documentation into the repository’s README.

---

## [0.1.0]  
Project Initialization

### Added
- Initial team meeting establishing individual roles and responsibilities.
- High-level planning of the project scope and functional expectations.
- Selection of programming language (C) and a modular architecture.
- Early brainstorming of potential questions and supported structures.

---

This changelog follows a simplified semantic versioning style and provides a continuous historical record of the system's development.
