#include "binary_trees.h"
/**
* binary_tree_size - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		r = binary_tree_size(tree->right);
		l = binary_tree_size(tree->left);
	}
	return (l + r + 1);
}
