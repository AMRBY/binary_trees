#include "binary_trees.h"
/**
* binary_tree_postorder - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
* @func: all the tree
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		func(tree->n);
		binary_tree_postorder(tree->right, func);
	}
}
