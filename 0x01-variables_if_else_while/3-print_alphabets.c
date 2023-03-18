#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	char a, A;

	a = 'a';
	A = 'A';
	do {
		putchar(a);
		a++;
	} while (a <= 'z');

	do {
		putchar(A);
		A++;
	} while (A <= 'Z');
	putchar('\n');
	return (0);
}
