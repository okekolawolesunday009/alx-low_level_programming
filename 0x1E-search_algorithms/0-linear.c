#include "search_algos.h"
/**
 * linear_search - search for an element in an array
 * @array: data to search
 * @size: number of array
 * @value: dtata to be search
 * Return: the element searched for
 */
int linear_search(int *array, size_t size, int value){
	size_t i;

	if (!value)
		return (-1);
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

}
