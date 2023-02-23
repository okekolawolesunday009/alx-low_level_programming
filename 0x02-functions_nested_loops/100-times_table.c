#include "main.h"

/**
 * print_times_table - prints bla bla bla
 * @n: parameter used
 *
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i, j, p;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				_putchar(',');
				_putchar(' ');
				if (p <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(' ');
					_putchar((p / 10) % 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (p > 99 && p < 1000)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar((p  % 10) + '0');
				}
				else
				{
					_putchar((p / 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
