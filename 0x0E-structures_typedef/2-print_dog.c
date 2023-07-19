#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog struct.
 * @d: Pointer to the dog struct to be printed.
 * Description:
 * This function prints the name, age, and owner of a dog struct.
 * If any of the struct members are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
