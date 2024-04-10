#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent:pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*declare a pointer to a new node*/
	binary_tree_t *new;

	/*Allocate memory for the new node*/
	new = malloc(sizeof(binary_tree_t));
	/*Check if memory alocation was successful*/
	if (new == NULL)
		return (NULL);/*Return NULL if allocation failed*/

	/*Set the value and pointers of the new node*/
	new->n = value;/*Assign value to new node n member*/
	new->parent = parent;/*Set the parent pointer of the new node with parent*/
	new->left = NULL;/*Initialize the left child*/
	new->right = NULL;/*Initialize the right node*/

	/*Return a pointer to the newly created node*/
	return (new);
}
