#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         parent is NULL, or node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	/* If node is NULL, parent is NULL, or grandparent is NULL, return NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Set parent and grandparent */
	parent = node->parent;
	grandparent = parent->parent;

	/* If grandparent's left child is parent, return right child */
	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
