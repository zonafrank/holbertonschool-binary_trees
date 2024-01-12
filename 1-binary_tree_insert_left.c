#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the new node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->left = parent->left;
	new->right = NULL;
	if (new->left != NULL)
	{
		new->left->parent = new;
	}
	parent->left = new;

	return (new);
}
