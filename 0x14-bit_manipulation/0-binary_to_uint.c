#include "main.h"

/**
 * binary_to_uint - converts binary to interger
 * @b: the parameter passed
 *
 * Return: an interger equivalent to the binary
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i = 0;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			res |= (1 << (strlen(b) - 1 - i));
		else if (b[i] != '0')
			return (0);
	}
	return (res);
}
