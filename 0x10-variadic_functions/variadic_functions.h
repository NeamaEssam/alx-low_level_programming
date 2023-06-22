#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include<stdarg.h>
#include<stdio.h>


/**
 * struct frmt - struct frmt
 * @test: pointer to input for test
 * @printer: pointer to function
 */
typedef struct frmt
{
	char *test;
	void (*printer)();
} frmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
