#include "binary_trees.h"


/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf
 * Otherwise - returns 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*CHECK IF NODE AND MEMEBERS ARE NOT NULL*/
	/*If node or members is not NULL: node is a root*/
	if (node == NULL)
		return (0);
	if (node->left != NULL && node->right != NULL)
		return (1);

	return (0);
}
