#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main(void) {
    pid_t pid;
    int status;

    char *pwd_argv[] = {"pwd", NULL};
    char *ls_argv[] = {"ls", "-l", "/tmp", NULL};


    printf("my shell wants to take your command :)\n");
    pid = fork();

    if (pid == 0) 
    {
	    if (execvp(pwd_argv[0], pwd_argv) < 0)
	    {
		    perror("Error - failed");
		    exit(EXIT_FAILURE);
	    }
    }
    else if (pid > 0)
    {
	    wait(&status);
	    if (WIFEXITED(status))
		    printf("pwd cmd with status %d\n", WEXITSTATUS(status));
    }
    else
    {
	    perror("fork failed");
	    exit(EXIT_FAILURE);
    }

    pid = fork();
    if (pid == 0) {
        if (execvp(ls_argv[0], ls_argv) < 0) {
            perror("Error: execvp failed");
            exit(EXIT_FAILURE);
        }
    }
    else if (pid > 0) {
        wait(&status);
        if (WIFEXITED(status)) {
            printf("ls -l /tmp command exited with status %d\n", WEXITSTATUS(status));
        }
    }
    else {
        perror("Error: fork failed");
        exit(EXIT_FAILURE);
    }

   
}

