#include <stdio.h>

/**
 * main - Entry poinit
 *
 * variable : n as int
 * Description: prints 0 t 9
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
