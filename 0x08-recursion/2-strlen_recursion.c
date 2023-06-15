#include "main.h"

/**
 * _strlen_recursion - funtion that returns the length of a string.
 * @s: The string t be measured.
 *
 * Returns: The length of a string.
 */

int _strlen_recursion(char *s);

int _strlen_recursion(char *s)
{
        if(*s == '\0') return 0;
        else return 1 + _strlen_recursion(s + 1);
}
