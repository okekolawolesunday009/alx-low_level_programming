#include "main.h"

/**
 * print_array - print the n of array with a comma
 * @n: int a
 * @n: int n
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
