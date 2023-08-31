#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: The value to store in the node to be inserted
 *
 * Return: A pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL) /* Check if the input tree is NULL */
		return (NULL);
	/* If the tree is empty, create a new node and make it the root */
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	/* If the value already exists in the tree, return NULL */
	if (value == (*tree)->n)
		return (NULL);
	/* If the value is smaller to the current node's value, insert on the left */
	if (value < (*tree)->n)
	{
		/* If the left child is NULL, insert the new node there */
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			/* Recursively insert on the left subtree */
			return (bst_insert(&((*tree)->left), value));
		}
	}
	else
	{
		/* If the right child is NULL, insert the new node there */
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			/* Recursively insert on the right subtree */
			return (bst_insert(&((*tree)->right), value));
		}
	}
}
