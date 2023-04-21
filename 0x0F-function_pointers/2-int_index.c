#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - prints the index of a number in any function
 * @array: array of datas
 * @size: int size
 * @cmp: function pointers
 * Return: returns the values of index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (array == NULL || cmp ==  NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
