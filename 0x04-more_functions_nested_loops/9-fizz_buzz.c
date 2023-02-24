#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int v;

	for (v = 1; v <= 100; v++)
	{
		if ((v % 3) == 0 && (v % 5) == 0)
			printf("FizzBuzz");
		else if ((v % 3) == 0)
			printf("Fizz");
		else if ((v % 5) == 0)
			printf("Buzz");
		else
			printf("%d", v);
		putchar(' ');
	}
	printf("\n");
	return (0);
}
