#include "main.h"

/**
 * _strlen_recursion - funtion that returns the length of a string.
 * @s: The string t be measured.
 *
 * Returns: The length of a string.
 */

int _strlen_recursion(char *s);
void printString(char *s);
int _putchar(char c);

int main(void)
{
        char *s[] = "Hello, world";
        int string_length = _strlen_recursion(s);
        printString(*s);
        _putcha( '\n' );
        return 0;
}
int _strlen_recursion(char *s)
{
        if(*s == '\0') return 0;
        else return 1 + _strlen_recursion(s + 1);
}
void printString(char *s)
{
        if(*s == '\0') return;
        _putchar(*s);
        printString(str + 1);}
