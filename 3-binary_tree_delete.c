#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: Pointer to the tree that is to be deleted
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return;

	left = tree->left;
	right = tree->right;
	free(tree);

	if (left != NULL)
		binary_tree_delete(left);

	if (right != NULL)
		binary_tree_delete(right);
}
