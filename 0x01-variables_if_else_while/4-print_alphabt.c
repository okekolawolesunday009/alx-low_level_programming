#include <stdio.h>

/*
 * main - Entry point
 *
 * variables
 * Description: prints all letters except q and e
 * Return : 0 always
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
