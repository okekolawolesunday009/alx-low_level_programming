#include <stdio.h>

/**
 * main - Entry point
 *
 * Resturn: prints number from 00 to 99
 */

int main(void)
{
	int n, z, y, p;

	for (n = 48; n <= 57; n++)
	{
		for (z = 48; z <= 56; z++)
		{
			for (y = 48; y <= 57; y++)
			{
				for (p = 48; p <= 57; p++)
				{
					putchar(n);
					putchar(z);
					putchar(' ');
					putchar(y);
					putchar(p);

					if (n != 57 || z != 56 || y != 57 || p != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
