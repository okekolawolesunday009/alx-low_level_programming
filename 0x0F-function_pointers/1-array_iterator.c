#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - loops through array to print
 * @array: datas to print
 * @size: size of arry
 * @action: call back function
 *
 * Return: returns the values in the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || f == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);

}
