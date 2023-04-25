#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints mul of 2 numbers
 * @argc: arg count
 * @argv: arg value
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, p;

	if (argc != 3)
	{
		printf("Error\n");
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	p = n1 * n2;
	printf("%d\n", p);

	return (0);
}
