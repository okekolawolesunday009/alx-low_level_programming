#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of n of char
 * @str: char of c
 *
 * Return: Always success
 */

void puts_half(char *str)
{
	int index, length, half;

	length = strlen(str);
	if ((length % 2) == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	for (index = half; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
