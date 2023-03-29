#include "binary_trees.h"

/**
 * array_to_avl - Creates an AVL tree from an array.
 * @array: The array of values.
 * @size: The length of the array.
 * Write a function that builds an AVL tree from an array
 * Return: A pointer to the AVL tree, otherwise NULL.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i;
	avl_t *root = NULL;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			avl_insert(&root, *(array + i));
		}
	}
	return (root);
}
