#include"variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of args
* Return: sum of all args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int sum = 0, i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}
