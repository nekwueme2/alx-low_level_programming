#include "function_pointers.h"

/**
 * int_index - function that returns the index place
 * if comparison = true, else -1
 * @array: array
 * @size: size of the elements in the array
 * @cmp: function pointer
 *
 * Return: return (0);
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
