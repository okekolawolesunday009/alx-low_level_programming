#include "function_pointers.h"

/**
 * int_index - sarches for an interger
 * @arrray: array
 * @size: size of the array
 * @cmp: comparator
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}	
