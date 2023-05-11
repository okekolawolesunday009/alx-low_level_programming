#include <stdio.h>

int main(int ac, char **av)
{
       	int i;
    printf("Number of arguments: %d\n", ac);
    for (i = 0; i < ac; i++)
    {
        printf("Argument %d: %s\n", i, av[i]);
    }
    return (0);
}
