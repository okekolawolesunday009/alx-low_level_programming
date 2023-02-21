#include "main.h"

/**
 * print_alphabet_x10 - print a to z 10X
 *
 * Return: Always sucess
 */

void print_alphabet_x10(void)
{
	char c;
	int i;
	/**comment**/
	for (i = 0; i <= 9; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
