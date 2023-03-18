#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char a;

	i = 0;
	a = 'a';
	while (i < 16)
	{
		if (i < 10)
			putchar('0' + i);
		else if (i >= 10)
		{
			putchar(a);
			a++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
