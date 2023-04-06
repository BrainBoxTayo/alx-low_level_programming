#include"main.h"
/**
  * prime_checker - helper function
  * @n: number
  * @ctr: decrement variable
  * Return: 1 or 0
  */
int prime_checker(int n, int ctr)
{
	if (ctr == 1)
	{
		return (1);
	}
	if (n % ctr == 0 && n != ctr && n != 1)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, ctr - 1));
	}
}

/**
  * is_prime_number - checks if a number is a prime number or not
  * @n: number to be checked
  * Return: 0(is not) or 1(is prime)
  */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (prime_checker(n, n));
}
