#include <stdio.h>
/**
 * main - prints all hexadecimals in lower case
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
for (c = 0; c <= 15; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
