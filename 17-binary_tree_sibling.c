#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node if it exists or NUL
 * also returns NULL if parent of node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL && parent->right != NULL)
	{
		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
	}

	return (NULL);
}
