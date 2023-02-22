#include "main.h"

/**
 * void print_to_98 - function prints n to 98
 *
 * Return: Always suuccess
 */

void print_to_98(int n)
{
	int z, i;
	n = n;
	z = 98;

	if (n >= 98)
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
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= z; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(".");
				printf(" ");
			}
		}
		printf("\n");
	}
}
