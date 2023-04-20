#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
  * op_add - adds two ints
  * @a: first int
  * @b: second int
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtracts two ints
  * @a: first int
  * @b: second int
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies two ints
  * @a: first int
  * @b: second int
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divison of two ints
  * @a: to be divided
  * @b: divisor
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - adds two ints
  * @a: first int
  * @b: second int
  * Return: remainder of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
