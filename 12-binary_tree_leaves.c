#include "binary_trees.h"
/**
* binary_tree_leaves - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (2);
	if else(tree->left || tree->right)
		return (1);
	else
		return (0);
}
