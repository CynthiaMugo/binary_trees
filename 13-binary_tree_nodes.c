#include "binary_trees.h"

/**
 * binary_tree_nodes -> counts the node with at least one
 * child in a binary tree
 * @tree: tree to count the nodes from
 * Return: no of nodes counted
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size -> measures the size of the binary tree
 * @tree: tree to measure the size of
 * Return: size of the tree
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves -> counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 * Return: no of leaves
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
