#include "main.h"

/**
 * print_triangle - prints n number of triagle
 * @size
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = size = 0; j < i; j++)
			{
				_putchar('#');
			}
			if (j == size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
