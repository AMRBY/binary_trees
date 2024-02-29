#include "binary_trees.h"
/**
* binary_tree_is_leaf - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (!(node->right) && !(node->left))
		return (1);
	else
		return (0);
}
