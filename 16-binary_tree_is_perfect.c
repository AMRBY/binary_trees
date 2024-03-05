#include "binary_trees.h"
/**
* binary_tree_is_perfect - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (tree->right && tree->left)
	{
		if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
			if (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left))
				if (binary_tree_size(tree->right) == binary_tree_size(tree->left))
					return (1);
	}
	return (0);
}
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
