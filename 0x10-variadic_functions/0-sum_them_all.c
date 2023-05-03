#include"variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of args
* Return: sum of all args
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list numbers;

	va_start(numbers, n);

	int sum = 0, i;

	for (i = 0; i < n; i++)
		sum += va_arg(numbers);

	va_end(numbers);
	return (sum);
}
