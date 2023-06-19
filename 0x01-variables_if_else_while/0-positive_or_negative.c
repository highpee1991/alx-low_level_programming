#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* header location */

/* code body */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else
	{
		printf("is negative");
	};
	return (0);
}
