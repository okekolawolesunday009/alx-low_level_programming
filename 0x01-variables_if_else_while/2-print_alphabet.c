#include <stdio.h>

/**
 * main - Entry point
 *
 * variables:
 * Description: prints the aphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
