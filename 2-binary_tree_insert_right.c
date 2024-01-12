#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the new node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->right = parent->right;
	new->left = NULL;
	if (new->right != NULL)
	{
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}
