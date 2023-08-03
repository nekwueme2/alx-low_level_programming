#include "main.h"
/**
 * _puts_recursion - function that functions like puts
 * @s: s
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
        if (*s)
        {
                _putchar(*s);
                _puts_recursion(s + 1);
        }
        else
                _putchar('\n');
}
