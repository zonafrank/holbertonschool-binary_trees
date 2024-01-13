#include "binary_trees.h"

/**
 * pow - calculates the exponent of a given base number
 * @base: the base number
 * @exponent: the exponent
 * Return: result of raising the base to the exponent
 */
double _pow(double base, int exponent)
{
	double result;
	int i;

	if (exponent <= 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		for (i = 0; i < exponent; i++)
		{
			result *= base;
		}
		return (result);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or zero if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: depth of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected_size = _pow(2, height) - 1;

	return (size == expected_size);
}
