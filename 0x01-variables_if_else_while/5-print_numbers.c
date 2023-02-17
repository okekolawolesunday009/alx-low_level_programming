#include <stdio.h>

/**
 * main - Entry point
 *
 * variables : n as int
 * Description: prints 0 to 9
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
