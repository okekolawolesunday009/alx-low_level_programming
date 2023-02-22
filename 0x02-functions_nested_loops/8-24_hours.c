#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: 00:00  - 23: 59
 */

void jack_bauer(void)
{
	int a;
	int b;
	int min_rem;
	int hours_rem;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			min_rem = b % 10;
			hours_rem = a % 10;
			_putchar(a / 10 + '0');
			_putchar(hours_rem + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(min_rem + '0');
			_putchar('\n');
		}
	}
}
