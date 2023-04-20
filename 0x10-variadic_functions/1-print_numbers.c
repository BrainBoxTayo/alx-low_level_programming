#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
  * print_numbers - print numbers
  * @seperator: string between numbers
  * @n: number of integers passed to function
  * Return: Nothing
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list intVar;

	if (n == 0)
		return;
	va_start(intVar, n);
	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(intVar, int));
		if (i != n && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(intVar);
}
