#include 

/**
 * main - Entry point
 * @i: parameter passed
 *
 * Description: prints all form of n
 * Return: Always 0 (suceess)
 */

void positive_or_negative(int i)
{
	if(i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
