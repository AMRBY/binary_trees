#include "binary_trees.h"
/**
* binary_tree_insert_left - Binary tree node
* Description: insert a node
* Return: binary_tree_t
* @parent: pointer to the node
* @value: value of node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node || node == NULL || parent == NULL || !parent)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	if (parent->left == NULL)
		node->left = NULL;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
