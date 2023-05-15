#include "main.h"


int main(int argc, char *argv[])
{
	int pid_len = 0;
	pid_t pid = fork();
	char *input;
	int status;

	printf("Welcome to shell");

	while ((nread = getline(&input, &pid_len, stdin)) != -1)
	{
		printf("cisfun$");
		if (nread == -1)
		{
			free(input);
			exit(EXIT_FAILURE);
		}
		argv[0] = input;
		if ( pid == 0)
		{
			execve(input, argv[0],NULL);
		}else
		{
			wait(&status);
		}

	}
	return (0);
}
