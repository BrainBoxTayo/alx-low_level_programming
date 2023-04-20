#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
  * print_strings - prints strings then a new line
  * @separator: printed between strings
  * @n: number of strings passed to the function
  * Return: Nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringVar;
	unsigned int i;
	char *str;
	
	va_start(stringVar, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(stringVar, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (separator != NULL && i != (n))
			printf("%s", separator);
	}
	printf("\n");
	va_end(stringVar);	
}
