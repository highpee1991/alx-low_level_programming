#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the name of the dog.
 * @owner: Pointer to the owner of the dog.
 * @age: Age of the dog.
 *
 * Description: This structure defines the attributes of a dog, including its
 * name, owner, and age.
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif /* DOG_H */
