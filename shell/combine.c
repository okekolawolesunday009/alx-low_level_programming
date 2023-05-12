#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(void)
{
    char *input;
    char *argv[3];
    pid_t child_pid;
    int status;

    printf("welcome to our shell program :) :)\n");

    while ((input = readline("root/user/kolawoleAlxShell$ ")) != NULL) {
        if (strcmp(input, "ls -l /tmp") == 0) {
            argv[0] = "ls";
            argv[1] = "-l";
            argv[2] = "/tmp";
	    char *ls_argv[] = {"/bin/ls", NULL};
            child_pid = fork();
            if (child_pid == 0) {
                if (execvp(ls_argv[0], ls_argv) < 0)
		{
                	perror("execv");
                	exit(EXIT_FAILURE);
            	}
	    }
            wait(&status);
        } else if (strcmp(input, "pwd") == 0) {
	   char *pwd_argv[] = {"/bin/pwd", NULL};
            child_pid = fork();
            if (child_pid == 0) {
		    if (execvp(pwd_argv[0], pwd_argv) < 0)
		    {
                	execv("/bin/pwd", argv);
                	perror("execv");
	                exit(EXIT_FAILURE);
		    }
            }
            wait(&status);
        } else if (strcmp(input, "exit") == 0) {
            free(input);
            exit(EXIT_SUCCESS);
        } else {
            printf("Unknown command: %s\n", input);
        }

        free(input);
    }

    return 0;
}

