#include "main.h"

/**
 * print_rev - prints the n of char in reverse
 * @s: char str
 *
 * Return: Alwasy suceess
 */

void print_rev(char *s)
{
	int a;
	/**comment**/
	for (a = 0; (s[a]) != '\0'; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		_putchar((s[a]));
	}
	_putchar('\n');
}
