#include "binary_trees.h"
/**
* binary_tree_is_full - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (tree->right && tree->left)
	{
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	}
	else if (!tree->right && !tree->left)
		return (1);
	else
		return (0);
}
