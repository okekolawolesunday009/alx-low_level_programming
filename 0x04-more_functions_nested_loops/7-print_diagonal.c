#include "main.h"

/**
 * print_diagonal - prints n of diagonal
 * @n: parameter used
 * Return: always suvcess
 */

void print_diagonal(int n)
{
	int l, space;

		if (n > 0)
		{
			for (space = 0; space < n; space++)
			{
				for (l = 0; l < n; l++)
				{
					if (l == space)
					{
						_putchar('\\');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
}
