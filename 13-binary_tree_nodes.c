#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Description: This function counts nodes that have at least one child
 * (left or right). A NULL pointer is not a node, and leaf nodes
 * (nodes with no children) are not counted.
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the current node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Count this node + nodes with children in left + right subtrees */
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	/* If it's a leaf node (no children), don't count it but check subtrees */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
