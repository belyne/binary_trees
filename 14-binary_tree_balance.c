#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	/* If the tree is empty (NULL), its height is 0 */
	if (tree == NULL)
	{
		return (0);
	}
	/* Calculate the height of the left and right subtrees recursively */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/* Return the maximum height plus one to account for the current node */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;
	/* If the tree is empty (NULL), its balance factor is 0 */
	if (tree == NULL)
	{
		return (0);
	}
	/* Calculate the height of the left and right subtrees */
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);
	/* Calculate and return the balance factor */
	return (left_height - right_height);
}
