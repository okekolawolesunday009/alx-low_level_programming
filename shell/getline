#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) 
{
	FILE *fp;
	char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    fp = fopen(argv[1], "r");

    if (fp == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    if (argc != 2)
    {
               fprintf(stderr, "Usage: %s <file>\n", argv[0]);
               exit(EXIT_FAILURE);
    }
     if (fp == NULL)
     {
        perror("fopen");
        exit(EXIT_FAILURE);
     }


    while ((nread = getline(&line, &len, fp)) != -1) {
        printf("Read %zu characters:\n", nread);
        printf("%s", line);
    }

    free(line);
    fclose(fp);
    return 0;
}
