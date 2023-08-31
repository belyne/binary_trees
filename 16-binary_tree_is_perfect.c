#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Base case: If tree is NULL, height is 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the maximum of left and right subtree heights plus 1 */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check if left and right subtrees have the same height */
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		/* If both subtrees are NULL, the node is perfect */
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		/* Check perfectness of both left and right subtrees */
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	/* If subtree heights differ, the tree is not perfect */
	return (0);
}
