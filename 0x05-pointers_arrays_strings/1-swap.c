#include<stdio.h>
#include"main.h"
/**
  * swap_int - swaps the values of two integers
  * @a: first int
  * @b: second int
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
