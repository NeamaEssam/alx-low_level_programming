#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
			a++;
		}
		else
			a++;
	}
	putchar('\n');

	return (0);
}
