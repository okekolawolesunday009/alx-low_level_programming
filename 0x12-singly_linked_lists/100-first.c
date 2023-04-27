#include <stdio.h>

/**
 * printFirst - print before main is excutedi
 * @void: void
 */

void printFirst(void)__attribute__ ((constructor));
void printFirst(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
