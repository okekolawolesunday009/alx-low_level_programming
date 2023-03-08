#include "main.h"

/**
 * _rev_recursion - prints revers of string
 * @s: char of s and a pointer
 *
 * Return: prints reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s)
	}
	_putchar('\n');
}
