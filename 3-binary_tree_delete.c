#include "binary_tree.h"

/**
 * binary_tree_delete - This function deletes the binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

	/* first delete both subtrees */
    if (tree->left != NULL)
        binary_tree_delete(tree->left);

	/* then delete the node */
    if (tree->right != NULL)
        binary_tree_delete(tree->right);

    free(tree);
}