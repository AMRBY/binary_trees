#include "binary_trees.h"
/**
* binary_tree_delete - Binary tree node
* Description: insert a node
* Return: void
* @tree: all the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
