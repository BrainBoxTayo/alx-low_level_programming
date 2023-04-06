#include"main.h"
/**
  * square_root_helper - helper function for _sqrt_recursion
  * @n: number to be rooted
  * @upper: upper limit
  * @lower: lower limit
  * Return: result
  */
int square_root_helper(int n, int upper, int lower)
{
	int mid, result;

	if (upper * upper == n)
		return (upper);
	if (upper == lower)
		return (-1);
	mid = (upper + lower) / 2;
	if (mid < n / mid)
		return (square_root_helper(n, upper, mid + 1));
	result = square_root_helper(n, mid, lower);
	if (result * result != n)
	{
		return (-1);
	}
	else
		return ((result == -1) ? mid : result);
}
/**
 * _sqrt_recursion - returns the square root
 * @n: number to be rooted
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (square_root_helper(n, n, 0));
}

