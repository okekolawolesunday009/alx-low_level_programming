#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints array of num separated by comma
 * @separator: sparator ","
 * @n: array of n which is contstant
 *
 * Return: lsit of array with comma
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap,  n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
