#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptions: print lowercase alphabet and higher case
 * Return: Always 0
 */

int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
