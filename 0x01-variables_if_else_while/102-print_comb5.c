#include <stdio.h>

/**
 * main - Entry point
 *
i* Return: prints doub;e digit from 00 - 99
 */

int main(void)
{

        int n, z;

        for (n = 48; n <= 57 ; n++)
        {
                for (z = n ; z <= 57; z++)
                {
                      
                            putchar(n);
                            putchar(z);
                        
                      
                      

                        if (n != 57 || z != 57 )
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        return (0);
}
