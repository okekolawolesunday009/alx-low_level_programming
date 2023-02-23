#include <stdio.h>

/**
 * main - finds and prints the sum of the even valued terms
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int j, k, n, z;

	j = 1;
	k = 2;
	z = 0;

	for (i = 1; i <= 33; ++i)
	{
		if ( j < 400000 && (j % 2) == 0)
		{
			z = z + j;
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("%lu\n", z);
	return (0);
}
	
