#include "main.h"

void print_binary(unsigned long int n)
{
	int i,flag, size = sizeof(unsigned long int) * 8;
       	char *binary = malloc(size + 1);
	binary[size] = '\0';
	if (binary == NULL)
		return;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			flag = 1;
		if (flag == 1)
		{
			binary[i] = (n & 1) ? '1' : '0';
			n >>= 1;
		}
		
	}
	for (i = 0; i < size; i++)
	{
		_putchar(binary[i]);
	}
	free(binary);
}
