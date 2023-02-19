#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: prints number from 00 to 99
 */

int main(void)
{
	int p, y, z, n, p1, p2;
	/**comment**/
	for (n = 48; n <= 57; n++)
	{
		for (z = 48; z <= 56; z++)
		{
			for (y = 48; y <= 57; y++)
			{
				for (p = 48; p <= 57; p++)
				{
					p1 = (n * 10) + z;
					p2 = (y * 10) + p;

					if (p1 < p2)
					{
						putchar(n);
						putchar(z);
						putchar(' ');
						putchar(y);
						putchar(p);
							if (n == 57 && z == 56 && y == 57 && p == 57)
							{
								break;
							}
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
