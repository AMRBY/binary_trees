#include "binary_trees.h"
/**
* binary_tree_preorder - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
* @func: all the tree
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
