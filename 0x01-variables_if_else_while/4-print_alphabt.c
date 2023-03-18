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

	while (a <= 'z' && a != 'q' && a != 'e')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
