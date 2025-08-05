#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: The height of a binary tree is the number of edges
 * on the longest path from the root node to a leaf node.
 * If tree is NULL, return 0.
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* If the node is a leaf (no children), height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Calculate the height of left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return 1 + the maximum height of the two subtrees */
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
