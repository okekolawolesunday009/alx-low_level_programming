#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status;

	char *argv[] = {"/bin/ls", "-l", NULL};

	child_pid = fork();
	if (child_pid == 0)
	{
		int val = execve(argv[0], argv, NULL);
		printf("Wait for me, wai!!\n");
		sleep(3);
		if (val == -1)
		{
                	perror("Error:");
                	return (-1);
        	}
	}
	else
	{
		wait(&status);
		printf("oh, its good move on\n");
	}
	return (0);
}

