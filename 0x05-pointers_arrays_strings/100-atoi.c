#include <limits.h>
#include <ctype.h>
#include <stddef.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: Converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	if (s == NULL)
		return (0);

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (isdigit(*s))
		{
			digit = *s - '0';

			if (sign == 1 && (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)))
				return (INT_MAX);
			else if (sign == -1 && (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit > -(INT_MIN % 10))))
				return (INT_MIN);

			result = result * 10 + sign * digit;
		}
		else if (result != 0)
			break;

		s++;
	}

	return (result);
}

