#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return (NULL);

	new = binary_tree_node(parent, value);

	if (new = NULL)
		return (NULL);

	return (new);
}
