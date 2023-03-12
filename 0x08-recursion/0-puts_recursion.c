#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char of s
 *
 * Return: returns a string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
