#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		v <<= 1;
		v += b[i] - '0';
		i++;
	}

	if (b[i] != '\0')
		return (0);
	return (v);
}
