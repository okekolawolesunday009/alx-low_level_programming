#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, r, o;
	char *charMemory = malloc(sizeof(char) * letters);

	o = open(filename, 0_RDONLY);
	r = read(o, charMemory, letters);
	w = write(1, charMemory, letters);

	if (filename == NULL)
		return (0);
	if (charMemory == NULL)
		return (0);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(charMemory);
		return (0);
	}
	free(charMemory);
	close(o);

	return (w);
}
