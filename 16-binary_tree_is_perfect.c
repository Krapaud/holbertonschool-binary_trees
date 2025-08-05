#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight = 0;
	size_t rHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);
	if (lHeight > rHeight)
		return (lHeight + 1);
	else
		return (rHeight + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}
