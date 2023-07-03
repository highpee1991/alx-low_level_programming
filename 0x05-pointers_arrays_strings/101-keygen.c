#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generate_rand_char(void)
{
	int randomNum = rand() % 62;
	if (randomNum < 26) 
	{
		return 'A' + randomNum;
	}
	else if (randomNum < 52)
	{
		return 'a' + (randomNum - 26);
	}
	else 
	{
		return '0' + (randomNum - 52);
	}
}

void generate_rand_pass(char* password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generate_rand_char();
	}
	password[i] = '\0';
}

int main(void)
{
	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1];
	generate_rand_pass(password);

	printf("Generated password: %s\n", password);

	return (0);
}
