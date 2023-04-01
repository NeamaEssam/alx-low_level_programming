#include"main.h"
#include<stdio.h>


/**
* rot13 - capitalize all chars of string
* @a: input
* Return: string
*/

char *rot13(char *a)
{
	int i;
	char *first = a;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoder[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*a)
	{
		for (i = 0; i < 52; i++)
		{
			if (*a == letter[i])
			{
				*a = encoder[i];
				break;
			}
		}
		a++;
	}
	return (first);
}
