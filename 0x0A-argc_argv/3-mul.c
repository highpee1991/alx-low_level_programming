#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
