#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * mul - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 *
 * Description: This program multiplies two positive numbers passed as
 * command-line arguments in base 10. It prints the result of the
 * multiplication, followed by a new line. If the number of arguments is
 * incorrect or the arguments are not composed of digits, it prints "Error",
 * followed by a new line, and exits with a status of 98.
 */
int mul(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!isdigit((unsigned char)argv[1][0]) ||
	!isdigit((unsigned char)argv[2][0]))
	{
		printf("Error\n");
		exit(98);
	}

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", num1 * num2);

	return (0);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 *
 * Description: The main function calls the mul function to multiply two
 * positive numbers passed as command-line arguments.
 */
int main(int argc, char *argv[])
{
	return (mul(argc, argv));
}
