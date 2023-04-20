#include"variadic_functions.h"
#include<stdarg.h>
/**
  * sum_them_all - sum of n numbers of integers
  * @n: number of parameters
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list newVar;

	if (n == 0)
		return (0);
	va_start(newVar, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(newVar, int);
	}
	va_end(newVar);
	return (sum);
}
