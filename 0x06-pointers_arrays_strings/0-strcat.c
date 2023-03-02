#include "main.h"

/**
 * _strlen - checks lenghth of string
 * @str: char str
 *
 * Return: Alwasy success
 */

int _strlen(char *str)
{
	int l = 0;

	while(*str)
	{
		str++;
		l++;
	}
	return (l);
}

/**
 * _strcat -concats two strings
 * @dest: char destination
 * @src: soursce
 *
 * Return: concatibates
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest + _strlen(dest);

	int l = _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (l);
	*dest = *cat;
	return (cat);
}
