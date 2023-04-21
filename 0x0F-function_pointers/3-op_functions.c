#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - gets plus of a nad b
 * @a: int a
 * @b: int b
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets minus of a and b
 * @a: int a
 * @b: int b
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gets mul of a and b
 * @a: int a
 * @b: int b
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gets div of a and b
 * @a: int a
 * @b: int b
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets modulus
 * @a: int a
 * @b: int b
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
