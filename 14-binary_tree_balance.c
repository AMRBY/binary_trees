#include "binary_trees.h"
/**
* binary_tree_height - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t hr = 0, hl = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		hl = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		hr = binary_tree_height(tree->right) + 1;
	}
	return (hl >= hr ? hl : hr);
}
/**
* binary_tree_balance - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->right)
	{
		right = binary_tree_height(tree->right) + 1;
	}
	if (tree->left)
	{
		left = binary_tree_height(tree->left) + 1;
	}
	return (left - right);
}
