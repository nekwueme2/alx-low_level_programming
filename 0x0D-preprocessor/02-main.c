#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: Returns (0);
 */

int main(void)
{
	printf("File : %s\n", __FILE__);
	return (0);
}
