#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full, right_is_full;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);
	return (left_is_full && right_is_full);
}
