#include "main.h"

/**
 * clear_bit - clearss bit to zero
 * @n: parameter n
 * @index: index number
 *
 * Return: correct output
 */
 
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
