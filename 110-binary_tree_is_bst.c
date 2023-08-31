#include "binary_trees.h"

/**
 * is_bst_util - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the current node being checked
 * @min: Pointer to the minimum allowed value for this node
 * @max: Pointer to the maximum allowed value for this node
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int is_bst_util(const binary_tree_t *tree, const int *min, const int *max)
{
	/* If the current node is NULL, it's a valid BST */
	if (tree == NULL)
		return (1);

	/* Check if the node's value is within the allowed range */
	if ((min && tree->n <= *min) || (max && tree->n >= *max))
		return (0);

	/* Recursively check left and right subtrees */
	return (is_bst_util(tree->left, min, &tree->n) &&
			is_bst_util(tree->right, &tree->n, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	/* If the tree is NULL, it's not a valid BST */
	if (tree == NULL)
		return (0);

	/* Use the helper function to check the entire tree */
	return (is_bst_util(tree, NULL, NULL));
}
