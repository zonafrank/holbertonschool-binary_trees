#include "binary_trees.h"

/**
 * @brief Creates a new binary tree node
 *
 * @param parent Pointer to the parent node of the new node
 * @param value Value to be stored in the new node
 *
 * @return Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
