#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	char* ptr = s;

	memset(ptr, b, n*sizeof(char));
	return (s);
}
