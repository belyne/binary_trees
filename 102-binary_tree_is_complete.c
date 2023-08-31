#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_perfect(tree) == 1)
		return (1);

	if (binary_tree_is_perfect(tree) == 0)
		return (0);

	return (0);
}

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* return 1 if perfect, 0 if not */
	if (left_height == right_height)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* return the height of the tree */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}