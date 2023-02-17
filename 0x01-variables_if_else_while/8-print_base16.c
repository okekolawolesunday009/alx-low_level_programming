#include <stdio.h>

/**
 * main - Entry point
 *
 * variables:  and in as int
 * Description: prints 0 t 9 and hex a to f
 * Return: Aalways 0
 */

int main(void)
{
	int n, hex;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
