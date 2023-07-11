#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: The sum of indices on success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		sum = i;
	}
	printf("%d\n", sum);
	return (0);
}
