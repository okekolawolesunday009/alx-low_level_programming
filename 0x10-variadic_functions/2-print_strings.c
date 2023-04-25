#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * print_strings - prints array of num separated by comma
 * @separator: sparator ","
 * @n: array of n which is contstant
 *
 * Return: lsit of array with comma
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list ap;
	char *str;
        unsigned int i;

        va_start(ap,  n);
        for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

                if (i != (n - 1) && separator != NULL)
                        printf("%s", separator);
        }
        printf("\n");
        va_end(ap);
}
