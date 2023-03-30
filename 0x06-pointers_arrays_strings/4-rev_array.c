#include"main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array of integers
  * @n: size of array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i, swap_store = 0;

	for (i = 0; i < n / 2; i++)
	{
		swap_store = *(a + i);
		*(a + i) = *(a + (n - i) - 1);
		*(a + (n - i) - 1) = swap_store;
	}
}
