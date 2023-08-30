#include "binary_trees.h"


/**
 * binary_tree_depth - This function measures the
 *depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* if node has a parent, increment depth */
	if (tree->parent != NULL)
	{
		depth++;
	}

	/* if node has a parent, increment depth */
	if (tree->parent != NULL)
	{
		depth += binary_tree_depth(tree->parent);
	}

	return (depth);
}
