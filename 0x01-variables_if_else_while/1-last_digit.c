#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** assign a random number to the variable n.
 *
 *  each time it is executed. 
 *  Complete the source code in order to print t
 *  he last digit of the number stored in the 
 *  variable n
 **/
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = abs(n) % 10;
	printf("Last digit of %d is %d ",n, lastdigit);
	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	} else if (lastdigit == 0) 
	{
		printf("and is 0\n");
	} else 
	{
		printf("and is less than 6 and not 0\n");
	};
	return (0);
}
