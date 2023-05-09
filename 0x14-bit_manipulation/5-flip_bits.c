#include "main.h"

/**
 * flip_bits - flips bit
 * @n: parameter
 * @m: parameter
 * Return: always success
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
