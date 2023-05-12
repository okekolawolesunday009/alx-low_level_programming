#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
	char *newargv[] = {NULL, "hello", "world", NULL};
	char *newenviron[] = {NULL};
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file-TO-EXECUTE>\N",argv[0]);
		exit(EXIT_FAILURE);
	}
	newargv[0] = argv[1];
	execve(argv[1], newargv, newenviron);
	perror("execve");
	exit(EXIT_FAILURE);
}

		
