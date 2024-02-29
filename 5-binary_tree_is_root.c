#include "binary_trees.h"
/**
* binary_tree_is_leaf - Binary tree node
* Description: insert a node
* Return: void
* @node: all the tree
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (!(node->parent))
		return (1);
	else
		return (0);
}
