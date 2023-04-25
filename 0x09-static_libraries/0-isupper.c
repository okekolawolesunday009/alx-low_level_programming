#include "main.h"
#include <ctype.h>

/**
 * _isupper - gogogog
 * @c: pararmeter
 *
 * Return: Always true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
