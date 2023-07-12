#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int digit;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			unsigned int j;
			e = argv[i];

			for (j = 0; j < strlen(e); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			digit = atoi(argv[i]);

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
