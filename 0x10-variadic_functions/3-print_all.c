#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - prints list of char
 * @arg: arg is int
 *
 * Return: a character
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints number
 * @arg: argument
 *
 * Return: always return int
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - print float numbers
 * @arg: argument
 * Return: always true
 */

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - prints strings
 * @arg: argument
 * Return: true
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);
}

/**
 * print_all - prints all based on format
 * @format: picks format
 *
 * Return: always the reesult of format
 */

void print_all(const char * const format, ...)
{
	va_list lists;
	int i, j;
	char *separator  = ", ";

	print_t defs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(lists, format);

	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(defs[j].identifier)))
			j++;
		if(j < 4)
		{
			defs[j].print(lists);
			printf("%s", separator);
		}

		i++;
	}
	printf("\n");
	va_end(lists);
}
