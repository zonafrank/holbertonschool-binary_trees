#include "binary_trees.h"

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
