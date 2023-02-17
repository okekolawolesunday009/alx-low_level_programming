#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Entry point.
 *
 * variable : n is declared as int.
 * Description : program prints,
 * return value is zero, iff n is greater 0 output "is posituive",
 * else if n is 0 output "is zero ",
 * else if n is less than 0 "is negative".
 * Return : return main 0 (succes).
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
