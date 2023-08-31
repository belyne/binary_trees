#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL if no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	tmp = (binary_tree_t *)second;
	while (tmp)
	{
		if (tmp == first)
			return ((binary_tree_t *)first);
		tmp = tmp->parent;
	}
	tmp = (binary_tree_t *)first;
	while (tmp)
	{
		if (tmp == second)
			return ((binary_tree_t *)second);
		tmp = tmp->parent;
	}
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	return (binary_trees_ancestor(first->parent, second->parent));
}
