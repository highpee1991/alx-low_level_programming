#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the
 * program into a single string.
 * @ac: The number of command-line arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a dynamically allocated string containing
 *         the concatenated arguments, separated by a newline character.
 *         The caller is responsible for freeing the allocated memory.
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	char *res;
	int i, j;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	res = (char *)malloc(len * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		int arg_len = strlen(av[j]);

		memcpy(res + index, av[j], arg_len);

		if (j < ac - 1)
		{
			res[index] = '\0';
			index++;
		}
	}
	return (res);
}
