#include"main.h"
/**
  * factorial - the function that carries out the mathematical operation
   factorial {7! = 7 * 6 * 5....* 1}
  * @n: number to be "factorialed"
  * Return: factorial of n
  */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
