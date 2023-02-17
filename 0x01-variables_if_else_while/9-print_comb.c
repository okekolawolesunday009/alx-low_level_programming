#include <stdio.h>

/**
 * main - Entry point
 *
 * variables: n as int
 * Description: ptints 0- 9 with comma and space
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
