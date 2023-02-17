#include <stdio.h>

/*
 * main - Entry point
 *
 * variable :
 * Description: print lowercase alphabet and higher case
 * Return: 0 always
 */

int main(void)
{
	int ch, CH;
	
	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH < 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
