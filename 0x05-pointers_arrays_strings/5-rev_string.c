#include "main.h"

/**
 * rev_string - func that prints a string and also
 * in reverse, followed by a new line
 * @s: declaration of s and paramters for the function
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
        int c;

	for (c = 0; s[c] != '0'; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
	for (c = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
