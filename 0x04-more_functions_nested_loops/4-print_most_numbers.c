#include "main.h"

/**
 * print_most_numbers - prints 0 to 0 except 2 nd 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
