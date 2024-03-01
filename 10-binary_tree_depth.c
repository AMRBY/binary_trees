#include "binary_trees.h"
/**
* binary_tree_depth - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t hl = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		hl = binary_tree_depth(tree->parent) + 1;
	}
	return (hl);
}
