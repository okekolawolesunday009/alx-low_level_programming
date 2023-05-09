#include "main.h"

/**
 * get_endianness - prints 1 if little endian and 0 otherwise
 *
 * Return: always success
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *p = (char *)&num;
	/**code**/
	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
