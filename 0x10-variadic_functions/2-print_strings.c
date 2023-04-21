#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * prin_strings - prints arrays of strings
 * @separator: separator
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
			printf("(nill)");
		else
			printf("%s", string);
		if (index != (n - 1) && separator != NUL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
