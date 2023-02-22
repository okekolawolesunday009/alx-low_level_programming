#include "main.h"

/**
 * times_table - function that prints 9 times table
 *
 * Return: Alwats success
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			p = i * j;
			_putchar(',');
			_putchar(' ');

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
