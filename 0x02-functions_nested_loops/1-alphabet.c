#include "main.h"
/**
 * main - Entry point
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
