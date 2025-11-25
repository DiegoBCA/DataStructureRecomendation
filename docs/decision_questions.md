Data Structure Decision System Questionnaire
This document details the key questions used by the system to determine the most suitable data structure. The approach is to progressively rule out options based on fundamental properties: linearity, access, ordering, and relationships.

Design Justification
The questions were designed to divide the decision space into logical categories:

Nature of the data: Are they linear or relational?

Order requirements: Is strict ordering or priority required?

Access constraints: LIFO, FIFO, or random access?

List of Questions
Below are the questions as they appear in the program's execution flow:

Question 1: Do the data represent complex network-like relationships (multiple connections between elements, such as maps or social networks)?

Purpose: Differentiate between linear/hierarchical structures and Graphs.

Options: Yes / No

Question 2: Does the data have a hierarchical structure (parent/child) or require maintaining order for fast searches?

Purpose: Identify the need for Trees (BST, AVL, Heap) versus simple linear structures.

Options: Yes / No

Question 3: (If hierarchical) Do you always need to access the element with the HIGHEST priority or value quickly (e.g., priority queues)?

Purpose: Distinguish between a Heap and search trees (BST/AVL).

Options: Yes / No

Question 4: (If search tree) Are you concerned about the tree becoming unbalanced and degrading performance (do you want guaranteed O(log n))?

Purpose: Decide between a simple BST and a self-balancing tree (AVL).

Options: Yes / No

Question 5: Is the order of insertion and deletion strict and limited (only at the ends)?

Purpose: Identify Stacks and Queues.

Options: Yes / No

Question 6: (If strict) Do you need the LAST element in to be the FIRST one out (Stack/LIFO behavior)?

Purpose: Differentiate Stack (LIFO) from Queue (FIFO).

Options: Yes / No

Question 7: Do you know the exact size of the data (is it fixed) and do you need fast direct access by index (e.g., data[5])?

Purpose: Recommend Static Arrays for maximum access speed versus dynamic structures.

Options: Yes / No

Question 8: (If dynamic list) Must the data be traversed in a continuous cycle (the last element connects back to the first)?

Purpose: Distinguish between a simple Linked List and a Circular List.

Options: Yes / No
