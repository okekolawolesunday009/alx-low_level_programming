#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	pid_t pid = fork();
	
	if (pid == 0)
	{
		printf("Child PID is %d\n", getpid());
	}
	else if (pid > 0) {
		printf("Parent PID is %d, child PID is %d\n", getpid(), pid);
	}
	else
	{
		perror("fork");
		return 1;
	}

	printf("Number of arguments: %d\n", ac);
	for (i = 0; i < ac; i++)
	{
		printf("Argument %d: %s\n", i, av[i]);
	}
	return (0);
}
