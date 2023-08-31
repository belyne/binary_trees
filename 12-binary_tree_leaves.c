#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: Number of leaves, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If the tree is empty (NULL), it has no leaves */
	if (tree == NULL)
	{
		return (0);
	}
	/* If the current node is a leaf (has no children), return 1 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*
	 * Recursively calculate the number of leaves in the left subtree
	 * and the right subtree, and add them together to get the total.
	 */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
