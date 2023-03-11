#include <stdio.h>

/**
 * main - prints the argument passed
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always sucess
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;
	/**is okay**/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
