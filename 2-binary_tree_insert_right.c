#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts node as the right-child of another node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	struct binary_tree_s *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
	}

	else
	{
		new->right = parent->right;
		new->right->parent = new;
		parent->right = new;
	}

	return (new);

	}
