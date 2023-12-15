#include "search_algos.h"
#include <math.h>
/**
 * jump_search - uses jumpsearch to search in ordered list
 * @array: ordered-list to search from
 * @size: lenght of the array
 * @value: value that is searched for
 * Return: retyrns the serch itm or none
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jumpSize, x;
	long unsigned int prev;
	
	jumpSize = sqrt(size);
	prev = 0;
	if (!value || array == NULL)
		return (-1);
	while (array[jumpSize] <= value && jumpSize < size)
	{
		printf("Value checked array[%ld] = [%d]\n", jumpSize, array[jumpSize]);
		prev = jumpSize;
		jumpSize += sqrt(size);
		if (jumpSize > size - 1)
		{
			return (-1);
		}
	}
	for (x = prev; x < jumpSize; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			printf("Value found between indexes[%ld] and [%ld]\n",x, jumpSize);
			return (x);
		}
	}
	return (-1);
}
