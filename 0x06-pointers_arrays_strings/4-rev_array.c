#include "main.h"
#include <stdio.h>
/**
 * rev_array - prints rev array
 * @n: int n
 * @a: arrays of int
 * Return: reverse array
 */

void reverse_array(int *a, int n)
{
    int i;

    i = n - 1;
    while (i >= 0)
    {
        if (i != n-1)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i--;
    }
    printf("\n");
}
