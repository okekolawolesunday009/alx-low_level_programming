#include "main.h"
/**
 * print_alphabet - prints a to z
 *
 * Return: prints a to z
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
