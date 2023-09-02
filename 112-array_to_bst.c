#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
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
			if (bst_insert(&tree, array[e]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
