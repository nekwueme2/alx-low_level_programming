#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - a data struct that holds information about a dog
 * @name: a pointer to character string
 * @age: age of a dog with floating point value
 * @owner: a pointer to character string represent the owner
 *
 * Description: This allows grouping these related data elements together.
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
