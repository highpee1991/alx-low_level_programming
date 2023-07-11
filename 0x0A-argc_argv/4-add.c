#include <stdio.h>
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

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			int isNumber = 1;
			int length = 0;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]) && (argv[i][j] != '-' || j != 0))
				{
					isNumber = 0;
					break;
				}
				length++;
			}

			if (isNumber && length > 0)
			{
				int digit = atoi(argv[i]);
				
				if (digit >= 0)
				{
					sum += digit;
				}
				else
				{
					printf("Error: Negative number not allowed\n");
					return (1);
				}
			}
			else
			{
				printf("Error: Not a valid number\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error: Insufficient arguments\n");
		return 1;
	}
	return 0;
}

