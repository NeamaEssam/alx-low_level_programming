#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a[] = "_putchar";
	char c;

	for (int b = 0; b < 8; b++)
	{
		c = a[b];
		_putchar(c);
	}
	_putchar('\n');
	return (0);

}
