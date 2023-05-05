#include "main.h"

/**
 * @set_bit - set the bit at index to 1
 * @n: number to be conveted to binary and checked
 * @index: position of the index at n
 *
 * Return: the result of n as the value of index has change
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1UL << index);

	return(1);
}
