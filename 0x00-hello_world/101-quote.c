#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[40] = "and that piece of art is useful\"";
	char str2[40] = " - Dora Korpar, 2015-10-19";
	char result[80];

	strcpy(result, str1);
	strcat(result, str2);

	fprintf(stderr, "%s\n", result);
	return (0);
}
