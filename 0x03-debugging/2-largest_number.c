#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > c && c > b)
		largest = a;
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
		largest = b;
	else if (c > a && a > b)
		largest = c;
	else
	{
		largest = c;
	}
	return (largest);
}
