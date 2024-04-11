#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node on right side of tree
 * @parent: pointer to the parent node
 * @value: pointer to the vale to be added
 * Return: pointer to the new node or NULL if failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}

	return (new_node);
}
