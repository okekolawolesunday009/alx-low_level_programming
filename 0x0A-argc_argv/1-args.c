#include <stdio.h>

/**
 * main - prints the number of args
 * @argv: parameter char
 * @argc: argument count
 *
 * Return: always sucess
 */
int main(int argc, char  __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
