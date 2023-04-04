#include"main.h"
#include<stdio.h>
/**
  * print_diagsums - prints the sum of the diagonals of an array of arrays
  * @a: array
  * @size: size of columns
  */

void print_diagsums(int *a, int size)
{
	int size_for = 0, size_bac = 0, i;

	for (i = 0; i < size; i++)
	{
		size_for += a[i * size + i];
	}
	for (i = size; i > 0; i--)
	{
		size_bac += a[i * size - i];
	}
	printf("%d, %d\n", size_for, size_bac);
}
