#include <stdio.h>

/**
 * main - Prints alphabets in lower case except q and e
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
