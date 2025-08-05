#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In-order traversal visits nodes in this order:
 * 1. Left subtree
 * 2. Current node
 * 3. Right subtree
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* First traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Then process the current node */
	func(tree->n);

	/* Finally traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
