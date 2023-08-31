#include "binary_trees.h"

/**
 * binary_trees_ancestor - This function finds the lowest
 * common ancestor of two nodes
 * @first: Is a pointer to the first node
 * @second: Is a pointer to the second node
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp = NULL;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	tmp = (binary_tree_t *)second;
	/* To check if the second node is the parent of the first node */
	while (tmp)
	{
		if (tmp == first)
			return ((binary_tree_t *)first);
		tmp = tmp->parent;
	}
	tmp = (binary_tree_t *)first;
	/* To check if the first node is the parent of the second node */
	while (tmp)
	{
		if (tmp == second)
			return ((binary_tree_t *)second);
		tmp = tmp->parent;
	}

	/* Checking if the nodes are siblings */
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent->parent == first)
		return ((binary_tree_t *)first);
	if (first->parent->parent == second->parent)
		return (second->parent);
	if (second->parent->parent == first->parent)
		return (first->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);

	/* If no common ancestor was found, return NULL */
	return (NULL);
}
