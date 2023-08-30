#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If the tree is empty (NULL), it has no nodes with children */
	if (tree == NULL)
	{
		return (0);
	}
	/* If the current node has at least one child, count it as a node */
	if (tree->left || tree->right)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	/* If the current node has no children, return 0 */
	return (0);
}
