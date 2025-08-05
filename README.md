# holbertonschool-binary_trees

## General Information

### What is a binary tree?
A binary tree is a hierarchical data structure where each node has at most two children, commonly referred to as the left child and the right child. It consists of nodes connected by edges, with one node designated as the root.

### What is the difference between a binary tree and a Binary Search Tree?
- **Binary Tree**: A general tree structure where nodes can have at most two children. There are no ordering rules for the values.
- **Binary Search Tree (BST)**: A special type of binary tree where for each node:
  - All values in the left subtree are less than the node's value
  - All values in the right subtree are greater than the node's value
  - Both left and right subtrees are also BSTs

### What is the possible gain in terms of time complexity compared to linked lists?
Binary trees (especially BSTs) can provide significant time complexity improvements:
- **Search**: O(log n) average case for BSTs vs O(n) for linked lists
- **Insertion**: O(log n) average case for BSTs vs O(1) for linked lists (if position known)
- **Deletion**: O(log n) average case for BSTs vs O(n) for linked lists

### What are the depth, height, and size of a binary tree?
- **Depth**: The depth of a node is the number of edges from the root to that node
- **Height**: The height of a tree is the maximum depth of any node in the tree
- **Size**: The total number of nodes in the tree

### What are the different traversal methods?
1. **In-order traversal**: Left → Root → Right
2. **Pre-order traversal**: Root → Left → Right
3. **Post-order traversal**: Left → Right → Root
4. **Level-order traversal**: Visit nodes level by level from top to bottom

### Types of binary trees:
- **Complete**: All levels are filled except possibly the last level, which is filled from left to right
- **Full**: Every node has either 0 or 2 children (no node has only 1 child)
- **Perfect**: All internal nodes have 2 children and all leaves are at the same level
- **Balanced**: The height difference between left and right subtrees of any node is at most 1

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files compiled on Ubuntu 20.04 LTS using gcc with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code should use the Betty style
- No global variables allowed
- Maximum 5 functions per file
- Standard library is allowed
- All function prototypes should be in `binary_trees.h`
- All header files should be include guarded

## Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Files

- `binary_trees.h` - Header file with all prototypes and data structures
- `0-binary_tree_node.c` - Function that creates a binary tree node
- `1-binary_tree_insert_left.c` - Function that inserts a node as the left-child of another node
- `2-binary_tree_insert_right.c` - Function that inserts a node as the right-child of another node
- `3-binary_tree_delete.c` - Function that deletes an entire binary tree
- `5-binary_tree_is_root.c` - Function that checks if a given node is a root
- `binary_tree_print.c` - Function to print binary trees (for visualization)