#include <stdlib.h>
#include <stdio.h>

char *rot13(char *str)
{
    if (str == NULL)
        return NULL;

    char *ptr;
    char *result;
    
    ptr = str;
    result = str;

    while (*ptr != '\0')
    {
        char letter = *ptr;

        if ((letter >= 'a' && letter <= 'm') || (letter >= 'A' && letter <= 'M'))
            letter += 13;
        else if ((letter >= 'n' && letter <= 'z') || (letter >= 'N' && letter <= 'Z'))
            letter -= 13;

    *ptr = letter;
     ptr++;
    }
    return (result);
}
