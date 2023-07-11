#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			int digit = atoi(argv[i]);

			if (isdigit(*argv[i]) && digit >= 0)
			{
				sum += digit;
			}
			else 
			{
				printf("Error\n");
                                return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
