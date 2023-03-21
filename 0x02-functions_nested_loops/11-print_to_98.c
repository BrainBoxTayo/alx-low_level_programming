#include<stdio.h>
#include"main.h"
/**
  * print_to_98- prints from n to 98
  * @n: starting point of n
  * Return: returns nothing
  */

void print_to_98(int n)
{	if (n > 98)
	{
		do{

			if (n == 98)
			{
				printf("%d", n);
				n--;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}while (n != 97);
		printf("\n");
	}
	else if (n < 98)
	{
		do{
			if (n == 98)
			{
				printf("%d", n);
				n++;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}while (n != 99);
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
