#include "main.h"

/**
 * _puts_recursion function is used to print a string *s
 * and followed by a new line
 *
 * Return (0)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
