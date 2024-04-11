#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: 0 if the tree is NULL
*
* This function calculates the height of a binary tree.
* The height of a binary tree is defined as the number of edges on the longest
* path from the root node to a leaf node
* If the tree is Null, the height is considered 0.
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Check if tree NULL*/
	if (tree)
	{/* if tree is not null*/
		/*initialize varaible to store left and right height*/
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
