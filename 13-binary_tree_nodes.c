#include "binary_trees.h"
/**
* binary_tree_nodes - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	else if (!tree->left || !tree->right)
		return (1);
	else
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
