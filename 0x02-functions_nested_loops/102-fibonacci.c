#include<stdio.h>
/**
  * fibo_helper - helper for main
  * @length: length of the series
  * Return: nothing
  */
void fibo_helper(int length)
{
	static unsigned long int num1 = 1, num2 = 2, num3;

	if (length > 0)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (length == 1)
			printf(" %lu\n", num3);
		else
		{
			printf(" %lu,", num3);
			fibo_helper(length - 1);
		}
	}
	else
	{
		return;
	}
}


/**
  * main - prints the fibonacci series to 50
  * Return: 0
  */

int main(void)
{
	int num = 1, length = 48;

	printf("%d, %d,", num, num + 1);
	fibo_helper(length);
	return (0);
}
