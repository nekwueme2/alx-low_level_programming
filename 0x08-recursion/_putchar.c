#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charact3r c to stdout
 * @c: The character to print
 *
 * Return: On sucdss 1
 * on error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
