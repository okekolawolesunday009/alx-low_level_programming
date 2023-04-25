#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */
int get_func(char *c, va_list args)
{
	int i;

	def_t cspec[] = {
		 {'c', print_char},
		 {'s', print_string},
		 {'%', print_percent},
		 {'d', print_d},
		 {'i', print_i}
		 {'b', print_binary},
			 {'x', print_hex_lower},
         {'X', print_hex_higher},
         {'o', print_octa},
         {'u', print_octa},

	};
    i = 0;
	 while (cspec[i].def)
	{
		if (cspec[i].def == c)
			return (cspec[i].f(args));
        i++;
	}
	return (_putchar(c));
}

