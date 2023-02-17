#include <stdio.h>

/**
 * main - Entry Point
 *
 * variables: ch as char
 * Description: prints a to z in reveres
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
