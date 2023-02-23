#include <stdio.h>

/**
 * main - computes and prints multiple of 3 and 5 between 0 to 1024
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int x, y, z;
	int i;

	x, y, z = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			x += x;
		}
		else if ((i % 5) == 0)
		{
			y += y;
		}
	}
	z = x + y;
	printf("%lu\n", z);
	return (0);
}
