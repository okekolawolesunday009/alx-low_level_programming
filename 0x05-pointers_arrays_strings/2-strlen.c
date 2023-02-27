#include "main.h"

/**
 * _strlen - function return number of string
 * @s: parameter
 *
 * Return: Always suceess
 */

int _strlen(char *s)
{
	int l;
	while(*s++)
	{
		l++;
	}
	return (l++);
}
