#include "main.h"
#include <stdlib.h>

/**
 * _abs - prints the absolute of a number
 * @n: parameter used
 *
 * Return: return the absolute value
 */

int _abs(int n)
{
	n = abs(n);

	return (n);
}
/**
 * print_last_digit - prints the last digit
 * @c: parameter used
 *
 * Return: returns the last digit
 */

int print_last_digit(int c)
{
	int p;

	c = _abs(c);
	p = c % 10;

	_putchar(p + '0');

	return (p);
}
