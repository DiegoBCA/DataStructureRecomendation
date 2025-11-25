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
