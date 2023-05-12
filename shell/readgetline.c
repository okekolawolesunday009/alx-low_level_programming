#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    printf("my shell wants to take your command :)\n");

    while (1)
    {
	   printf("$ ");
   	   if ((nread = getline(&line, &len, stdin)) != -1)
        	printf(":)%s", line);
	   else
		   break;
    }
    if (line)
        free(line);
    return 0;
}
