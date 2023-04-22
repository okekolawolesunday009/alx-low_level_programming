#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * print_strings - prints arrays of strings
 * @separator: separator
 * @n: array of n
 *
 * Return: list of array
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int index;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
