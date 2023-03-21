#include"main.h"
/**
  * print_last_digit- prints the last digit of a number
  * @n: used to store the value of the digit
  * Return: returns the last digit
  */

int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
		LastDigit = -1 * (n % 10);
	else if(n == 0)
	{
		LastDigit = (0);
	}
	else
	{
		LastDigit = (n % 10);
	}
	_putchar(LastDigit + '0');
	return (LastDigit);
}
