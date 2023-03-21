#include"main.h"
/**
  * print_sign- used to check the sign of numbers
  * @n: this stores the value to be tested
  *
  * Return: return 1 if n is greater than 0, return -1 if n is less than 0,
  * return 0 if n is 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
