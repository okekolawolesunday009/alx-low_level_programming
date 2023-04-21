#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: parameter involved
 * @f: f is a function call back
 *
 * Return: returns the value of name
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
