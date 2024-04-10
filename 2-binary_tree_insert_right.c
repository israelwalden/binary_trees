#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*CREATE A POINTER TO A TREE NODE*/
	binary_tree_t *new;

	/*CREATE A NODE*/
	/*If parent is NULL */
	if (parent == NULL)
		return (NULL);/*Return NULL*/

	/*create a new node and set value*/
	new = binary_tree_node(parent, value);
	/*If new node is NULL*/
	if (new == NULL)
		return (NULL);
	/*If parent-right node is not null*/
	if (parent->right != NULL)
	{
		/*update new-right to parent-right*/
		new->right = parent->right;
		/*set parent-right-parent to new*/
		parent->right->parent = new;
	}
	/*set parent-right node to new*/
	parent->right = new;
	return (new);
}
