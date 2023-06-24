#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints number, followed by a new line
 * @separator: pointer function to a string character
 * @n: value to be passed through the function
 *
 * Return: returns void;
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
