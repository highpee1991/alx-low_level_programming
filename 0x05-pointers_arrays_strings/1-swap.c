#include "main.h"

/**
 * swap_int - this function swap value of int a to b
 * @a: pointers to the first int
 * @b: this is the pointer to be seocnd int
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
