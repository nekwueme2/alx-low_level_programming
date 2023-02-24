#include <stdio.h>

/**
 * main - prints the lower case alphabet in reverse followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char Aph;
for (Aph = 'z'; Aph >= 'a'; Aph--)
{
putchar (Aph);
}
putchar ('\n');
return (0);
}
