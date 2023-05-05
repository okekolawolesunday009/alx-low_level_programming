#include "main.h"

/**
 * binary_to_uint - converts binary to interger
 * @b: the parameter passed
 *
 * Return: an interger equivalent to the binary
 */

unsigned int binary_to_uint(const char *b)
{
	size_t l = strlen(b), i = 0;
	unsigned int res = 0;

	for ( i = 0; i < l; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; i < l; i++)
	{
		if (b[i] == '1')
		{
			res += (unsigned int) pow(2, l - i -1);
		}
	}
	return (res);
}

