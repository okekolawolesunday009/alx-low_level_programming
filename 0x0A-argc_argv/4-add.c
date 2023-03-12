#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int p, num;
	unsigned d;

	num = 0;

	for (p = 1 ; p < argc; p++)
	{
		for (d = 0; d < strlen(argv[p]); d++)
		{
			if (!isdigit(argv[p][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[p]);
	}
	printf("%d\n", num);

	return (0);
}
