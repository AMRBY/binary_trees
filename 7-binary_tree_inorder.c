#include "binary_trees.h"
/**
* binary_tree_inorder - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
* @func: all the tree
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
