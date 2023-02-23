#include "main.h"

/**
 * print_line - prints n of line
 * @n: parameter used
 *
 * Return: Always Sucess
 */

void print_line(int n)
{
	int x;

	x = 0;
	while (x <= n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar(' ');
		}
		x++;
	}
	_putchar('\n');
}
