#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*FREE NODE MEMORY*/
	/*If node is no NULL, free memory*/
	if(tree != NULL)
	{
		binary_tree_delete(tree->left);/*Free left memeber node*/
		binary_tree_delete(tree->right);/*Free right member node*/
		free(tree);/*Free parent node*/
	}
}
