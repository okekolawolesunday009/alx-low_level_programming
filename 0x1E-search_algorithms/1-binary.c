#include "search_algos.h"

/**
 * binary_search - binary search divide and conquer
 * @array: sets of data
 * @size: size of array
 * @value: value to be searched
 * Return: returns the element to be searched
 */

int binary_search(int *array, size_t size, int value)
{
	int h, l, m, i;

	h = 0;
	l = size - 1;
	if ((!value) || array == NULL)
		return (-1);
	while (h <= l)
	{
		m = (h + l) / 2;
		printf("Searching in array: ");
		for (i = h; i <= l; ++i)
		{
			printf("%d", array[i]);
			if (i < l)
				printf(", ");
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			h = m + 1;
		else
			l = m - 1;
	}
	return (-1);
}
