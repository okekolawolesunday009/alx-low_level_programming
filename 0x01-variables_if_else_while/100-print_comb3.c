#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: prints doub;e digit from 01 - 89
 */

int main(void)
{

	int n, z;
	/*comment*/
	for (n = 47; n <= 57; n++)
	{
		for (z = n + 1; z <= 57; z++)
		{
			putchar(n);
			putchar(z);

			if (n != 56 || z != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
