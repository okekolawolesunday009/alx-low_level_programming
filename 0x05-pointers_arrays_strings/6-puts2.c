#include "main.h"

/**
 * puts2 - print the char of n in multiple of 2
 * @str: char str
 *
 * Return: Always success
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
