#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name using a function pointer
 * @name: the string to be added
 * @f: the function pointer
 *
 * Return: return nothing;
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
