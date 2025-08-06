#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Description: The sibling of a node is the other child of its parent.
 * If node is the left child, sibling is the right child and vice versa.
 *
 * Return: Pointer to the sibling node, or NULL if:
 *         - node is NULL
 *         - parent is NULL (node is root)
 *         - node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
