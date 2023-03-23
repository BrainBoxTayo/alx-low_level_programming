#include<stdio.h>
/**
  * main - FizzBuzz
  * Return: returns 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if(i != 100 && i != 1)
		{
			printf(" ");
		}
		if ((!(i % 3)) && (!(i % 5)))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
