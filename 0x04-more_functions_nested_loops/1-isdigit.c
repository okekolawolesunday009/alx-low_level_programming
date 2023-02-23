#include "main.h"

/**
 * _isdigit - chesks for digit 0-9
 * @c: parameter used
 *
 * Return: Always success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
