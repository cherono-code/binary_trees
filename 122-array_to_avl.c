#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t e, f;

	if (array == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
	{
		for (f = 0; f < e; f++)
		{
			if (array[f] == array[e])
				break;
		}
		if (f == e)
		{
			if (avl_insert(&tree, array[e]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
