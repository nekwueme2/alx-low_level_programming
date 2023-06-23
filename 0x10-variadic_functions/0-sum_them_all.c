#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: an unsigned int value to be passed, value is constant
 *
 * Return: returns 0 if n = 0
 * returns total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, total = 0;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(numbers, unsigned int);
	}
	va_end(numbers);

	return (total);
}
