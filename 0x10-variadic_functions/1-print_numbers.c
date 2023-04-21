#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints array of num separated by comma
 * @separator: separator
 * @n: array of numbers
 *
 * Return: Always n with ','
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(list, int));
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
