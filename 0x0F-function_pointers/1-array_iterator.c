#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array
 * @size: size of an array
 * @action: pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
