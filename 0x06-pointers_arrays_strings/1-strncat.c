#include "main.h"

/**
 * _strncat - concatenate two strings based on n for src
 * @desc: char dest, string to append upon
 * @src: string dat will be added
 * Return: concatenates
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; int dest_l = 0;

	while (dest[i++])
		dest_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_l++] = src[i];

	return (dest);
}
