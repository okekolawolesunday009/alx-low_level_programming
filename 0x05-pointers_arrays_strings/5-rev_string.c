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
        int c, fs;
	char character;

	for (c = 0; s[c] != '0'; c++)
	{
	}
	fs = 0;
	for (c = c - 1; c >= fs; c--)
	{
		character = (s[c]);
		s[c] = s[fs];
		s[fs] = character;
		character++;
	}
	_putchar('\n');
}
