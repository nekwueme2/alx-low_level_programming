#include <stdio.h>
#include "dog.h"

/**
 * 1-init_dog.c - a function that initializes a struct type variable
 * @*d: the value of the struct dog variable
 * @name: a pointer that storeds a string
 * @age: an intiger that stores the age
 * @owner: a pointer that stores a string
 *
 * Return: returns (0);
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	strncpy(d->name, name, 
