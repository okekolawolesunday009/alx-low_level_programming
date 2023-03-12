#include "main.h"

int is_divided(int num, int div);
int is_prime_number(int n);

/**
 * is_divided - chcks if divisible
 * @num: int num
 * @div: the divisor
 *
 * Return: if divisible - 0 else 1
 */

int is_divided(int num, int div)
{
	if (num % div == 0);
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}

	return (is_divided(num, div + 1));
}

/**
 * is_prime_number - chesks for prime
 * @n: number to check
 *
 * Return: if num is a prime
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 2 && n <= 3)
		return (1);

	return (is_divided(n, div));
}
