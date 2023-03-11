#include "main.h"

/**
 * _strlen - function return number of string
 * @s: parameter
 *
 * Return: Always suceess
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l++);
}
