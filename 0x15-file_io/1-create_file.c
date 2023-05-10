#include "main.h"

int create(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (textcontent != NULL)
	{
		for (; text_content[l];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
