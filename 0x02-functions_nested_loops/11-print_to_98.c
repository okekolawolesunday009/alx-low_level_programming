#include "main.h"

/**
 * print_to_98 - function prints from n to 98
 * @n: parameter used
 * Return: Always 0
 */

void print_to_98(int n)
{
	int z, i;

	n = n;
	z = 98;

	if (n < 98)
	{
		for (i = n; i <= z; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i >= z; --i)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		putchar('\n');
	}
}
