#include "binary_trees.h"
/**
* binary_tree_node - Binary tree node
* Description: create a node
* Return: binary_tree_t
* @parent: pointer to the node
* @value: value of node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
