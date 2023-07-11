#include "main.h"

/**
 * create_file - creats a file
 * @filename: file name
 * @text_content: text content
 * Return: always 1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL):
	{
		for (; text_content[l];)
			l++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
