#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates an array
 *
 * @array: array
 * @size: size
 * @action: a ppointer to a function to be executed
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
