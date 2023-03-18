#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: check the num
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(n, "%i is positive\n");
	else if (n == 0)
		printf(n, "%i is zero\n");
	else if (n < 0)
		printd(n, "%i is negative\n");
	return (0);
}
