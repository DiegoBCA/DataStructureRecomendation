# Data Structure Decision System

This document details the decision logic and key questions used by the system to determine the most suitable data structure for a given problem. The approach progressively rules out options based on fundamental properties: linearity, access patterns, ordering, and relationships.

## 📋 Design Justification

The questions are designed to divide the decision space into logical categories based on computational complexity and structure properties:

1.  **Nature of the data:** Linear vs. Relational (Graphs).
2.  **Order requirements:** Strict ordering vs. Priority vs. Unordered.
3.  **Access constraints:** LIFO, FIFO, or Random Access.

---

## 🧠 Decision Logic (Flowchart)

```mermaid
graph TD
    Start([Start]) --> Q1{Q1: Network-like relationships?}
    
    Q1 -- Yes --> R_Graph[Graph]
    Q1 -- No --> Q2{Q2: Hierarchical or Ordered?}
    
    Q2 -- Yes --> Q3{Q3: Priority/Max Value?}
    Q2 -- No --> Q5{Q5: Strict Insertion/Deletion?}
    
    Q3 -- Yes --> R_Heap[Heap / Priority Queue]
    Q3 -- No --> Q4{Q4: Balance concern?}
    
    Q4 -- Yes --> R_AVL[AVL Tree]
    Q4 -- No --> R_BST[Simple BST]
    
    Q5 -- Yes --> Q6{Q6: LIFO Behavior?}
    Q5 -- No --> Q7{Q7: Fixed Size + Index Access?}
    
    Q6 -- Yes --> R_Stack[Stack]
    Q6 -- No --> R_Queue[Queue]
    
    Q7 -- Yes --> R_Array[Static Array]
    Q7 -- No --> Q8{Q8: Continuous Cycle?}
    
    Q8 -- Yes --> R_CList[Circular Linked List]
    Q8 -- No --> R_List[Simple Linked List]

❓ List of Questions
Below are the questions as they appear in the program's execution flow:

Question 1
Do the data represent complex network-like relationships (multiple connections between elements, such as maps or social networks)?

Purpose: Differentiate between linear/hierarchical structures and Graphs.

Options: Yes / No

Question 2
Does the data have a hierarchical structure (parent/child) or require maintaining order for fast searches?

Purpose: Identify the need for Trees (BST, AVL, Heap) versus simple linear structures.

Options: Yes / No

Question 3
(If hierarchical) Do you always need to access the element with the HIGHEST priority or value quickly (e.g., priority queues)?

Purpose: Distinguish between a Heap and search trees (BST/AVL).

Options: Yes / No

Question 4
(If search tree) Are you concerned about the tree becoming unbalanced and degrading performance (do you want guaranteed O(log n))?

Purpose: Decide between a simple BST and a self-balancing tree (AVL).

Options: Yes / No

Question 5
Is the order of insertion and deletion strict and limited (only at the ends)?

Purpose: Identify Stacks and Queues.

Options: Yes / No

Question 6
(If strict) Do you need the LAST element in to be the FIRST one out (Stack/LIFO behavior)?

Purpose: Differentiate Stack (LIFO) from Queue (FIFO).

Options: Yes / No

Question 7
Do you know the exact size of the data (is it fixed) and do you need fast direct access by index (e.g., data[5])?

Purpose: Recommend Static Arrays for maximum access speed versus dynamic structures.

Options: Yes / No

Question 8
(If dynamic list) Must the data be traversed in a continuous cycle (the last element connects back to the first)?

Purpose: Distinguish between a simple Linked List and a Circular List.

Options: Yes / No
