#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t balance = 0;
	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 50);
	root->left->left = binary_tree_node(root->left, 40);
	root->left->right = binary_tree_node(root->left, 60);
	balance = binary_tree_balance(root);
	return (0);
}
