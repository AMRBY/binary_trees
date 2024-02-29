#include "binary_trees.h"
/**
* binary_tree_insert_right - Binary tree node
* Description: insert a node
* Return: binary_tree_t
* @parent: pointer to the node
* @value: value of node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL || !parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	if (parent->right == NULL)
		node->right = NULL;
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
