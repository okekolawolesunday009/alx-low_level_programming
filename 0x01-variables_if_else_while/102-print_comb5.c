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
	for (n = 0; n <= 97; n++)
	{
		for (z = 0; z <= 98; z++)
		{
			for (y = 0; y <= 99; y++)
			{
				for (p = 0; p <= 99; p++)
				{
					p1 = (n * 10) + z;
					p2 = (y * 10) + p;

					if (p1 > p2)
					{
						putchar((n % 10) + '0');
						putchar((z % 10) + '0');
						putchar(' ');
						putchar((y % 10) + '0');
						putchar((p % 10) + '0');
							if (n == 96 && z == 97 && y == 99 && p == 99)
							{
								continue;
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
