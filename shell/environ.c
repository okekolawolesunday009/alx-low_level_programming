#include <stdio.h>


extern char **environ;

int main (int argc, char  *argv[], char *envp[])
{
	int i;
	(void)argc;
	(void)argv;
	for(i = 0; envp[i] != NULL; i++)
		printf("%s\n", envp[i]);
	printf("\n");
	printf("break\n");

}
