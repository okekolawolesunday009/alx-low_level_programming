#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char of s
 *
 * Return: returns a string
 */

void _puts_recursion(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
