#include "main.h"

/**
 * _puts - prints the n of char
 * @str: char str
 *
 * Return: Alwasy suceess
 */

void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}



