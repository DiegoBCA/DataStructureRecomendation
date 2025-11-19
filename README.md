# DataStructureRecomendation
# Decision System – Data Structure Recommendations

This module contains all the output functions related to the 
final recommendation of a data structure.

Each structure has its own function, which prints:

- Description  
- Reasons for recommendation  
- Alternatives  
- ASCII illustration  
- Key operations in pseudocode  
- Short example  

## Files

### `results.h`
Contains the declarations of all result functions.

### `results.c`
Contains the full implementation of all result functions:
- Array  
- Linked List  
- Circular Linked List  
- Stack  
- Queue  
- Binary Search Tree  
- AVL Tree  
- Max Heap  
- Graph (Adjacency List)

## Usage

The main program only needs to call:

```c
showRecommendation(structureID);
