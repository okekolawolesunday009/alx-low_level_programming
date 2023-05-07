#include "main.h"

void print_binary(unsigned long int n)
{
	int size, i;
	size = sizeof(unsigned int) * 8;
	char *binary[size + 1];

	binary[size] = '\0';

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		binary[i] = (n & 1) ? '1' : '0';
		n >>= 1;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(binary[i]);
	}
}
