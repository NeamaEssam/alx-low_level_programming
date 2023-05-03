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

	if (n == 0)
		return;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		while (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);

}
