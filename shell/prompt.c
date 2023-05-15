#include "main.h"

void prompt(char **ac, char **env)
{
	char *input = NULL;
	size_t input_size = 0;
	pid_t pid;
	int new_result, i;
	char *args, *token;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		new_result = getline(&input, &input_size, stdin);

		if (new_result == -1)
		{
			free(input);
			exit(EXIT_FAILURE);
		}
		input[strcspn(input, "\n")] = '\0';

		pid = fork();
		argv[0] = 
		if (pid == -1)
		{
			printf("failed fork\n");
			return (1);
		}
		else if (pid == 0)
		{
			i = 0;
			token = strtok(input, " ");
			while (token != NULL)
			{
				args[i] = token;
				i++;
				token = strok(NULL, " ");
			}
			args[i] = NULL;

			execve(args[0], args, env);

			printf("failed if cmd fails\n");
			return (1);
		}
		else 
		{
			int status;
			waitpid(pid, &status, 0);
		}
	}
	free(line);

    return 0;
}
