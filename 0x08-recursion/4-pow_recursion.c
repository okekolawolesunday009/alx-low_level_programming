#include "main.h"

/**
 * _pow_recursion - return x number of y
 * @x: int x
 * @y: int y
 *
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return(result *= _pow_recursion(x, y - 1));
	}
}
