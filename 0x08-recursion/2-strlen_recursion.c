#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prints len of recursive string
 * @s: pointeer of char
 *
 * Return: always suceess
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = strlen(s);
	}
	return (length);
}
