#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - summs all the array
 * @n: araay of n passed
 *
 * Return: returns all sum of array
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int index, sum;

	sum = 0;
	va_start(list, n);
	if (n == 0)
		return (0);
	for (index = 0; index < n; index++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
