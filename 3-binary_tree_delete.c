#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Uses post-order traversal to delete all nodes.
 * If tree is NULL, do nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* First delete left subtree */
	binary_tree_delete(tree->left);

	/* Then delete right subtree */
	binary_tree_delete(tree->right);

	/* Finally delete the current node */
	free(tree);
}
