# Decision Rules and System Logic

This document describes the logical decision tree used by the system to recommend a data structure. The process follows a hierarchical elimination approach: first evaluating the nature of data (relational vs. linear), then ordering requirements, and finally access and memory constraints.

## 🔀 Logical Flow

The system evaluates user responses in the following priority order:

1.  **Are there Complex Relations?** (Graphs)
2.  **Is it Hierarchical/Ordered?** (Trees/Heaps)
3.  **Is it Restrictively Linear?** (Stacks/Queues)
4.  **Is it General Linear Storage?** (Arrays/Lists)

---

## ⚙️ Rule Mapping (Input -> Output)

Below is the specific logic for each recommendation and its justification (Rationale).

### 1. Relations Branch

* **Rule:** If the user indicates that the data represents multiple connections (networks, maps).
    * **Recommendation:** **GRAPH**
    * **Rationale:** Graphs are the only structure capable of efficiently modeling N:M (many-to-many) relationships.

### 2. Hierarchy and Priority Branch

If data is not a graph but requires ordering or hierarchy:

* **Rule:** If immediate access to the *highest priority* element is required.
    * **Recommendation:** **MAX HEAP**
    * **Rationale:** Provides `O(1)` access to the maximum element, ideal for priority queues.

* **Rule:** If guaranteed ordering and fast searches are required, and there is a concern about unbalancing.
    * **Recommendation:** **AVL TREE**
    * **Rationale:** Automatically maintains tree balance, guaranteeing operations in `O(log n)` even in the worst case.

* **Rule:** If ordering is required but the implementation should be simpler or unbalancing is not critical.
    * **Recommendation:** **BST (Binary Search Tree)**
    * **Rationale:** Standard structure for maintaining ordered data and allowing binary searches.

### 3. Restricted Linear Branch

If data is linear and processing order is strict:

* **Rule:** If behavior is LIFO (Last-In, First-Out).
    * **Recommendation:** **STACK**
    * **Rationale:** Ideal for history tracking (undo/redo), function calls, and recursion.

* **Rule:** If behavior is FIFO (First-In, First-Out).
    * **Recommendation:** **QUEUE**
    * **Rationale:** Ideal for buffers, print queues, and task processing in arrival order.

### 4. Storage and Access Branch

For general linear collections:

* **Rule:** If the size is known/fixed and fast access by index is needed.
    * **Recommendation:** **ARRAY**
    * **Rationale:** Offers the fastest possible access `O(1)` and memory efficiency (no extra pointers), but is static.

* **Rule:** If the structure must be cyclic.
    * **Recommendation:** **CIRCULAR LINKED LIST**
    * **Rationale:** Allows traversing data indefinitely without resetting pointers, useful for turns or playlists.

* **Rule:** If none of the above apply (frequent insertions, dynamic size, not cyclic).
    * **Recommendation:** **LINKED LIST**
    * **Rationale:** Allows dynamic growth and efficient insertion/deletion operations without reallocating all memory.
