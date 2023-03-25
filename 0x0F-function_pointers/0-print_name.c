#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints the name (function pointer
 * @name: parameter used
 * @f: parameter
 *
 * Return: returns name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
