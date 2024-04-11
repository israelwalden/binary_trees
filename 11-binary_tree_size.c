#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: If the tree is NULL, must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)/*If tree is not NULL*/
	{
		size += 1;/*Increment size if tree is not NUll*/
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);

	}
	return (size);
}
