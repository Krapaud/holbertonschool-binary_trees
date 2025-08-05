#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Description: The size of a binary tree is the total number of nodes
 * in the tree. If tree is NULL, return 0.
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Size = 1 (current node) + size of left subtree + size of right subtree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
