# Homework-Based Example: Linked List

This document presents a complete example based on a homework-style problem involving a singly linked list.  
It includes the input, the step-by-step walkthrough, and the final output, following the behavior implemented in the system.

---

# 1. Problem Overview

You are given a sequence of integer values.  
Your task is to insert them one by one into a **singly linked list**, always adding each new value at the end of the list.  
After inserting all values, you must traverse the list and print the final sequence.

This example demonstrates the dynamic growth and traversal of a Linked List.

---

# 2. Input

A sequence of integers to insert:

```
10 25 37 41
```

Each value is inserted in order, using **end insertion**.

---

# 3. Walkthrough (Step-by-Step)

This section explains how the linked list evolves after each insertion.

---

## Step 1: Insert 10

Initial list is empty (`head = NULL`).  
A new node containing 10 is created.

```txt
head -> [10|*] -> NULL
```

---

## Step 2: Insert 25

A new node containing 25 is created.  
We traverse from `head` until reaching the last node (10).  
Append the new node:

```txt
head -> [10|*] -> [25|*] -> NULL
```

---

## Step 3: Insert 37

A new node containing 37 is created.  
We traverse until reaching 25 and append 37.

```txt
head -> [10|*] -> [25|*] -> [37|*] -> NULL
```

---

## Step 4: Insert 41

A new node containing 41 is created and appended at the end.

```txt
head -> [10|*] -> [25|*] -> [37|*] -> [41|*] -> NULL
```

---

## Final Structure

After all insertions, the Linked List looks like:

```txt
HEAD -> [10|*] -> [25|*] -> [37|*] -> [41|*] -> NULL
```

---

# 4. Output

Traversing the list from head to tail:

```
10 25 37 41
```

---

# 5. Code Used (For Reference)

```c
Node *n = malloc(sizeof(Node));
n->data = val;
n->next = NULL;

/* Insert at end */
if (head == NULL) {
    head = n;
} else {
    aux = head;
    while (aux->next)
        aux = aux->next;
    aux->next = n;
}

/* Traversing and printing */
aux = head;
while (aux != NULL) {
    printf("%d ", aux->data);
    aux = aux->next;
}
```

---

# End of Document
