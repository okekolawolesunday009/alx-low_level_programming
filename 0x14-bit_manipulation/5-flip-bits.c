#include "main.h"

/**
 * flips_bits - flips bit
 * @n: n
 * @m: m
 * Return: return count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;
	/**code**/
	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
