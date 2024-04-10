#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *
 *Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Create a pointer to a new binary Tree*/
	binary_tree_t *new;

	/*if parent is NULL*/
	if (parent == NULL)
		return (NULL);/*Return NULL*/

	/*Create a new node with value*/
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	/*INSERT NEW LEFT NODE*/
	/*if parent node has a left node*/
	if (parent->left != NULL)
	{
		new->left = parent->left;/*set new-left to parent-left*/
		parent->left->parent = new;/*update parent-left-parent to new*/
	}
	parent->left = new;/*set parent-left to new*/

	return (new);/*return new*/
}
