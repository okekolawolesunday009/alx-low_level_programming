#include <stdlib.h>
#include <time.h>
/* 
 * main - Entry point
 *
 * variables:n, l str
 * Description: prints the last digit and outs the coressponing printa
 * Return : 0 (always success)
 */

int main(void)
{
	int n;
	char str[] = "Last didit of";
	int l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (l > 5)
		printf("%s %d is %d  and is greater than 5 and not 0\n", str n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", str, n, l);
	else 
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l)

	return (0);
}
