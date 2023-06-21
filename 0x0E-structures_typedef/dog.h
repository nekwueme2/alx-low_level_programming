#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data struct that holds information about a dog
 * @name: a pointer to character string
 * @age: age of a dog with floating point value
 * @owner: a pointer to character string represent the owner
 *
 * Description: This allows grouping these related data elements together.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
