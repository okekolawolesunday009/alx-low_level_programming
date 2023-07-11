#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>

/** 
 * read_textfile - reads a text file and prints it to th SO
 * @filename: the file to be read
 * @letters: number of letters 
 * Return: thhe number of letters reead and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w, r, o;
	char *charMemory = malloc(sizeof(char) * letters);

	o = open(filename, O_RDONLY);
	r = read(o, charMemory, letters);
	w = write(STDOUT_FILENO, charMemory, r);

	if (filename == NULL)
		return (0);
	if (o < 0)
	{
		free(charMemory);
		close(o);
	}
	if (o == -1)
		return (0);
	if (w < 1)
	{
		free(charMemory);
		close(o);
	}
	if (charMemory == NULL)
		return (0);
	close(o);
	free(charMemory);
	return (w);
}
