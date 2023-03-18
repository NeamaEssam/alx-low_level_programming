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
		printf(n, "%d is positive\n");
	else if (n == 0)
		printf(n, "%d is zero\n");
	else if (n < 0)
		printd(n, "%d is negative\n");
	return (0);
}
