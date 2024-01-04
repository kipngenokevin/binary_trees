#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: root node of the tree
 * Return: height of the tree otherwise
 * If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max_height;

	if (tree == NULL)
		return (0);

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (left_height > right_height)
		max_height = left_height;
	else
		max_height = right_height;
	return (max_height + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);


	left_height = (int)(binary_tree_height(tree->left));
	right_height = (int)(binary_tree_height(tree->right));

	return (left_height - right_height);
}
