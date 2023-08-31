#include "binary_trees.h"

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

/**
 * print_level - This function prints a given level of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @level: level to print
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - This function goes through a binary
 * tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	/* print each level */
	for (i = 1; i <= height + 1; i++)
		print_level(tree, i, func);
}
