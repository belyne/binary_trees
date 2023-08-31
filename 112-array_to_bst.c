#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: The number of elements in the array
 *
 * Return: A pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL; /* Root of the resulting BST */

	/* Check for valid input */
	if (array == NULL || size == 0)
		return (NULL);

	/* Insert each element of the array into the BST */
	for (size_t i = 0; i < size; i++)
	{
		/* Insert each element of the array into the BST */
		bst_insert(&root, array[i]);
	}

	/* Return the root of the created BST */
	return (root);
}
