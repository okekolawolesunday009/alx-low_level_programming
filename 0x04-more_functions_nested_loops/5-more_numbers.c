#include "main.h"

/**
 * more_numbers - prints 0 -9 based on n
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int row, value;

	row = 0;
	while (row <= 9)
	{
		value = 0;
		while (value <= 14)
		{
			if (value > 9)
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
			else
			{
				_putchar((value % 10) + '0');
			}
			value++;
		}
		_putchar('\n');
		row++;
	}
}
