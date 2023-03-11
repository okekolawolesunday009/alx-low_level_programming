#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int p, num, d;

	for (p = 0; p < argc; p++)
	{
		for (d = 0; argv[p][d]; d++)
		{
			if (argv[num][d] < '0' || argv[num][d] > '9')
			{
				printf("Error\n");
			}
		}
		num = atoi(argv[p]);
		num += num;
	}
	printf("%d\n", num);

	return (0);
}
