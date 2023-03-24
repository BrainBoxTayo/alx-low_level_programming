#include<stdio.h>
/**
  * main - FizzBuzz challenge
  * Return: returns 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			putchar(' ');
		}
	/*
	*	else if (i == 1)
	*	{
	*		printf("%d", i);
	*	}
		*/
		else
		{
			printf("%d ", i);
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}
