#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the elements of a dog
 * @d: variable d is a pointer
 *
 * Return: returns (nil);
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name is : %s\n", d->name ? d->name : "(nil)");
	printf("Age is : %.6f\n", d->age);
	printf("Owner is : %s\n", d->owner ? d->owner : "(nil)");
}
