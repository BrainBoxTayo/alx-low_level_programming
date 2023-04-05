#include<stdio.h>

/**
  * main - prints the fibonacci series to 50
  * Return: 0
  */

int main(void)
{
	unsigned long int fibo_storer[50] = {0}, fibo = 1;
	int i = 1;

	
	do {
		if (i == 50)
		{
			printf("%ld", fibo);
		}
		printf("%ld, ",fibo);
		fibo = fibo + fibo_storer[i - 1];
		fibo_storer[i + 1] = fibo;
		i++;
	} while (i <= 50);
	return (0);
}
