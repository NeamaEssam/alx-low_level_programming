#include"main.h"

/**
* reverse_array - reverse array
* @a: input
* @n: input
* Return: always 0
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
