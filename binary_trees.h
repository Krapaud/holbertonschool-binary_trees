#ifndef _BINARY_TREESH
#define _BINARY_TREESH

#include <stddef.h>
#include <stdlib.h>

/**
 
struct binary_tree_s - Binary tree node*
@n: Integer stored in the node
@parent: Pointer to the parent node
@left: Pointer to the left child node
@right: Pointer to the right child node*/
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s parent;
    struct binary_tree_sleft;
    struct binary_tree_s right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;

typedef struct binary_tree_s avl_t;

typedef struct binary_tree_s heap_t;


void binary_tree_print(const binary_tree_t);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value;
binary_tree_t binary_tree_insert_left(binary_tree_tparent, int value);
binary_tree_t binary_tree_insert_right(binary_tree_tparent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_tnode);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_ttree, void (func)(int));
void binary_tree_postorder(const binary_tree_ttree, void (func)(int));
size_t binary_tree_depth(const binary_tree_ttree);
size_t binary_tree_leaves(const binary_tree_t tree);


#endif / _BINARY_TREESH */
