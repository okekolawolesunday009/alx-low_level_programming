#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: prints all letters except q and e
 * Return: Always 0
 */

int main(void)
{
	char ch;

	ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}
