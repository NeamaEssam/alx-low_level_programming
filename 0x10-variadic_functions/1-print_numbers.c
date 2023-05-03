#include"variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @n: number of args
* @separator: string to be printed between numbers
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
		}
	}

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(numbers, int));
			return ;
		}
		printf("%d%s", va_arg(numbers, int), separator);
	}

	va_end(numbers);

}
