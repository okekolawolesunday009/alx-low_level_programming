#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, r, o;
	char *charMemory = malloc(sizeof(char) * letters);

	o = open(filename, O_RDONLY);
	r = read(o, charMemory, letters);
	w = write(STDOUT_FILENO, charMemory, r);

	if (filename == NULL)
		return (0);
	if (o == -1)
		return (0);
	if (charMemory == NULL)
		return (0);
	free(charMemory);
	close(o);
	return (w);
}
