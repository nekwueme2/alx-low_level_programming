#include <stdio.h>

/**
 * main - Prints all possible combination of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i);
}
if (i != 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
