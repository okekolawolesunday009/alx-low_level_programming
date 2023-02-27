#include "main.h"

/**
 * swap_int - function swaps two interger
 * @a: int a
 * @b: int b
 *
 * Return: Always success
 */

void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;
	*b = tmp;
}
