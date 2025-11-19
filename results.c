#include <stdio.h>
#include "results.h"

/* =========================================
   1. ARRAY
   ========================================= */
void showResult_Array() {
    printf("\n=====================================\n");
    printf("        STRUCTURE: ARRAY\n");
    printf("=====================================\n\n");

    printf("DESCRIPTION:\n");
    printf("An array stores elements of the same type in contiguous memory.\n");
    printf("It offers constant-time random access using indexing.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Fast indexed access is required.\n");
    printf("- The number of elements is known or stable.\n");
    printf("- Insert/delete in the middle is not frequent.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) Linked List\n");
    printf("2) Dynamic Array\n\n");

    printf("ILLUSTRATION:\n");
    printf("Index:  0   1   2   3   4\n");
    printf("Value: [10][25][37][41][53]\n\n");

    printf("PSEUDOCODE:\n");
    printf("access(i): return A[i]\n");
    printf("for i = 0 to n-1: process(A[i])\n\n");

    printf("EXAMPLE:\n");
    printf("int a[10];\n");
    printf("for(i=0;i<10;i++) scanf(\"%%d\", &a[i]);\n");
    printf("for(i=9;i>=0;i--) printf(\"%%d \", a[i]);\n\n");
}

/* =========================================
   2. LINKED LIST
   ========================================= */
void showResult_LinkedList() {

    printf("\n=========================================\n");
    printf("        STRUCTURE: LINKED LIST\n");
    printf("=========================================\n\n");

    printf("DESCRIPTION:\n");
    printf("A Linked List is composed of nodes connected by pointers.\n");
    printf("It grows dynamically with memory allocation.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Frequent insert/delete operations.\n");
    printf("- Size not known in advance.\n");
    printf("- No need for direct indexing.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) Array\n");
    printf("2) Circular Linked List\n\n");

    printf("ILLUSTRATION:\n");
    printf("HEAD -> [10|*] -> [25|*] -> [37|*] -> NULL\n\n");

    printf("PSEUDOCODE:\n");
    printf("insertEnd(x):\n");
    printf("  if head == NULL: head = newNode(x)\n");
    printf("  else:\n");
    printf("    aux = head\n");
    printf("    while aux.next != NULL: aux = aux.next\n");
    printf("    aux.next = newNode(x)\n\n");

    printf("EXAMPLE:\n");
    printf("Node *n = malloc(sizeof(Node));\n");
    printf("n->data = val;\n");
    printf("n->next = NULL;\n");
    printf("/* Insert at end */\n");
    printf("if(head==NULL) head = n;\n");
    printf("else {\n");
    printf("  aux = head;\n");
    printf("  while(aux->next) aux=aux->next;\n");
    printf("  aux->next = n;\n}\n\n");
}

/* =========================================
   3. CIRCULAR LINKED LIST
   ========================================= */
void showResult_CircularLinkedList() {

    printf("\n=====================================================\n");
    printf("        STRUCTURE: CIRCULAR LINKED LIST\n");
    printf("=====================================================\n\n");

    printf("DESCRIPTION:\n");
    printf("A Circular Linked List connects the last node back to the head.\n");
    printf("Ideal for cyclic processes such as playlists or task scheduling.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Data must be processed in cycles.\n");
    printf("- Continuous traversal without stopping.\n");
    printf("- Dynamic growth.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) Regular Linked List\n");
    printf("2) Queue\n\n");

    printf("ILLUSTRATION:\n");
    printf("HEAD -> [A|*] -> [B|*] -> [C|*] --+\n");
    printf("         ^------------------------+\n\n");

    printf("PSEUDOCODE:\n");
    printf("insertEnd(x):\n");
    printf("  if head==NULL:\n");
    printf("    head = newNode(x)\n");
    printf("    head.next = head\n");
    printf("  else:\n");
    printf("    aux=head\n");
    printf("    while aux.next != head: aux=aux.next\n");
    printf("    aux.next = newNode(x)\n");
    printf("    newNode.next = head\n\n");

    printf("EXAMPLE:\n");
    printf("/* Add node in circular structure */\n");
    printf("if(head == NULL) { head=n; n->next=head; }\n");
    printf("else { aux=head; while(aux->next!=head) aux=aux->next;\n");
    printf("       aux->next=n; n->next=head; }\n\n");
}

/* =========================================
   4. STACK
   ========================================= */
void showResult_Stack() {

    printf("\n===================================\n");
    printf("            STRUCTURE: STACK\n");
    printf("===================================\n\n");

    printf("DESCRIPTION:\n");
    printf("Stack uses LIFO (last-in, first-out). Insert/remove at the top.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Most recent element must be removed first.\n");
    printf("- Operations focus on push/pop.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) Queue\n");
    printf("2) Linked List\n\n");

    printf("ILLUSTRATION:\n");
    printf("TOP -> [45]\n");
    printf("        [33]\n");
    printf("        [12]\n\n");

    printf("PSEUDOCODE:\n");
    printf("push(x): stack[++top] = x\n");
    printf("pop(): return stack[top--]\n");
    printf("peek(): return stack[top]\n\n");

    printf("EXAMPLE:\n");
    printf("int push(int x){ if(top<MAX) stack[++top]=x; }\n");
    printf("int pop(){ if(top>=0) return stack[top--]; }\n\n");
}

/* =========================================
   5. QUEUE (Circular)
   ========================================= */
void showResult_Queue() {

    printf("\n=======================================\n");
    printf("              STRUCTURE: QUEUE\n");
    printf("=======================================\n\n");

    printf("DESCRIPTION:\n");
    printf("Queue uses FIFO (first-in, first-out). Uses circular indexing.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Process elements in arrival order.\n");
    printf("- Efficient with fixed-size buffers.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) Stack\n");
    printf("2) Linked List\n\n");

    printf("ILLUSTRATION:\n");
    printf("front -> [10][15][22][30][ ] <- rear\n\n");

    printf("PSEUDOCODE:\n");
    printf("enqueue(x): queue[rear]=x; rear=(rear+1)%N; count++\n");
    printf("dequeue(): val=queue[front]; front=(front+1)%N; count--\n\n");

    printf("EXAMPLE:\n");
    printf("queue[rear]=val; rear=(rear+1)%N; count++;\n");
    printf("val=queue[front]; front=(front+1)%N; count--;\n\n");
}

/* =========================================
   6. BST
   ========================================= */
void showResult_BST() {

    printf("\n==============================================\n");
    printf("          STRUCTURE: BINARY SEARCH TREE\n");
    printf("==============================================\n\n");

    printf("DESCRIPTION:\n");
    printf("A BST keeps data ordered: left < node < right.\n");
    printf("Enables efficient searching, insertion, and deletion.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Data must remain sorted.\n");
    printf("- Searches are frequent.\n");
    printf("- Dynamic structure.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) AVL\n");
    printf("2) Heap\n\n");

    printf("ILLUSTRATION:\n");
    printf("        [50]\n");
    printf("       /    \\\n");
    printf("    [30]    [70]\n");
    printf("    / \\     / \\\n");
    printf(" [20][40][60][80]\n\n");

    printf("PSEUDOCODE:\n");
    printf("search(x):\n");
    printf("  while node!=NULL:\n");
    printf("    if x==node.val: return FOUND\n");
    printf("    if x<node.val: node=node.left\n");
    printf("    else: node=node.right\n\n");

    printf("EXAMPLE:\n");
    printf("insert(root,val): /* recursive BST insert */\n");
    printf("  if root==NULL return newNode(val)\n");
    printf("  if val<root->data: root->left = insert(root->left,val)\n");
    printf("  else: root->right = insert(root->right,val)\n");
    printf("  return root;\n\n");
}

/* =========================================
   7. AVL
   ========================================= */
void showResult_AVL() {

    printf("\n=========================================\n");
    printf("                STRUCTURE: AVL TREE\n");
    printf("=========================================\n\n");

    printf("DESCRIPTION:\n");
    printf("An AVL Tree is a balanced BST with height difference <=1.\n");
    printf("Rotations restore balance automatically.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Balanced height guarantees O(log n).\n");
    printf("- Frequent inserts/deletes.\n");
    printf("- Ordered dynamic data.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) BST\n");
    printf("2) Heap\n\n");

    printf("ILLUSTRATION:\n");
    printf("Balanced subtree example:\n");
    printf("        [30]\n");
    printf("       /    \\\n");
    printf("    [20]    [40]\n\n");

    printf("PSEUDOCODE:\n");
    printf("BF(x) = height(right) - height(left)\n");
    printf("rotL(x): rotate left\n");
    printf("rotR(x): rotate right\n");
    printf("insertAVL(x): BST insert -> update heights -> rotate if |BF|>1\n\n");

    printf("EXAMPLE:\n");
    printf("Case: Right-heavy and inserted right child -> single left rotation.\n\n");
}

/* =========================================
   8. HEAP
   ========================================= */
void showResult_Heap() {

    printf("\n=========================================\n");
    printf("                STRUCTURE: MAX HEAP\n");
    printf("=========================================\n\n");

    printf("DESCRIPTION:\n");
    printf("Array-based complete binary tree where each parent >= children.\n");
    printf("Root contains the maximum element.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Need quick access to maximum.\n");
    printf("- Frequent insertions.\n");
    printf("- Priority behavior.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) BST\n");
    printf("2) AVL\n\n");

    printf("ILLUSTRATION:\n");
    printf("          [42]\n");
    printf("        /      \\\n");
    printf("     [35]      [23]\n\n");

    printf("PSEUDOCODE:\n");
    printf("insert(x): place at end, reheapUp\n");
    printf("removeTop(): move last to root, reheapDown\n");
    printf("parent(i)=(i-1)/2, left=2*i+1, right=2*i+2\n\n");

    printf("EXAMPLE:\n");
    printf("tree[last]=x; reHeapUp(last); last++;\n\n");
}

/* =========================================
   9. GRAPH
   ========================================= */
void showResult_Graph() {

    printf("\n=======================================\n");
    printf("                 STRUCTURE: GRAPH\n");
    printf("=======================================\n\n");

    printf("DESCRIPTION:\n");
    printf("A graph consists of vertices connected by edges.\n");
    printf("Adjacency list representation stores neighbors efficiently.\n\n");

    printf("WHY SELECTED:\n");
    printf("- Data describes relationships instead of sequences.\n");
    printf("- Efficient BFS/DFS traversal is required.\n");
    printf("- Sparse graph needs memory-efficient storage.\n\n");

    printf("ALTERNATIVES:\n");
    printf("1) Adjacency Matrix\n");
    printf("2) Tree\n\n");

    printf("ILLUSTRATION:\n");
    printf("a -- b\n");
    printf("|  /|\n");
    printf("c -- d\n\n");

    printf("Adjacency List:\n");
    printf("a -> b -> c\n");
    printf("b -> a -> c -> d\n");
    printf("c -> a -> b -> d\n");
    printf("d -> b -> c\n\n");

    printf("PSEUDOCODE:\n");
    printf("addEdge(u,v): insert v into list[u]\n");
    printf("DFS: visit node, recurse on unvisited neighbors\n");
    printf("BFS: use queue to explore layers\n\n");

    printf("EXAMPLE:\n");
    printf("addEdge(adj,0,1); addEdge(adj,0,2);\n\n");
}
