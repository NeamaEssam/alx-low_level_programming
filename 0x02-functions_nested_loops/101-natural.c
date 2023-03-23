#include"main.h"
#include<stdio.h>

/**
* main -   prints the n times table, starting with 0.
*
* Return: Always 0.
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
return (0);
}
