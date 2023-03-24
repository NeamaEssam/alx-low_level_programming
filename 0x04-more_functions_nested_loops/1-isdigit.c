#include"main.h"
#include<stdio.h>

/**
* _isdigit - checks for a digit
* @c: input
* Return: 1 if c is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		/*_putchar(c);*/
		/*_putchar(':');*/
		/*_putchar(' ');*/
		/*_putchar('1');*/
		return (1);
	}
	else
	{
		/*_putchar(c);*/
		/*_putchar(':');*/
		/*_putchar(' ');*/
		/*_putchar('0');*/
		return (0);
	}
}
