#include "binary_trees.h"
/**
* binary_tree_height - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht = 0;

	if (tree == NULL)
		return (0);
	while (tree->left || tree->right)
	{
		ht++;
		if (tree->left)
		{
			tree = tree->left;
		}
		else if (tree->right)
		{
			tree = tree->right;
		}
	}
	return (ht);
}
