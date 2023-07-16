#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

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

	if (!isdigit((unsigned char)argv[1][0]) || !isdigit((unsigned char)argv[2][0]))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", num1 * num2);

	return (0);
}

int main(int argc, char *argv[])
{
	return mul(argc, argv);
}
