#include<stdio.h>

/**
* main - main function
* Return: always 0.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz ");
		else if (!(i % 5))
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (!(i % 3))
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
