#include "main.h"

/**
 * get_bit - returns the value of abit at given idex
 * @n: number to retrieve bit from
 * @index: index of bit to retrieve
 *
 * Return: the value of the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long) * 8))
		return (-1);
	return ((n >> index) & 1);
}
