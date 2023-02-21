#include "main.h"

/**
 * _islower - check if the char is lowercase
 * @c: parameter used
 *
 * Return: suceess
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
