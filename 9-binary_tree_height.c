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
	const binary_tree_t *go = tree;

	if (tree == NULL || !tree)
		return (0);
	while (go->left || go->right)
	{
		ht++;
		if (go->left)
		{
			go = go->left;
		}
		else if (go->right)
		{
			go = go->right;
		}
	}
	return (ht);
}
