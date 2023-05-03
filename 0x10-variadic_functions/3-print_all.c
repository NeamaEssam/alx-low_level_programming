#include"variadic_functions.h"

/**
 * print_int - print int
 * @arg: list of args
 * Return: void
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char - print char
 * @arg: list of args
 * Return: void
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_float - print float
 * @arg: list of args
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - print string
 * @arg: list of args
 * Return: void
 */
void print_string(va_list arg)
{
	char *temp;

	temp = va_arg(arg, char *);
	if (temp == NULL)
	{
		temp = "(nil)";
	}
	printf("%s", temp);
}

/**
 * print_all - print all inputs
 * @format: const pointer to function of type char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list arg;
	char *seperator;

	frmt_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	seperator = "";
	while (format && format[i])
	{
		j = 0;
		while (types[j].test != NULL)
		{
			if (format[i] == types[j].test[0])
			{
				printf("%s", seperator);
				types[j].printer(arg);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
