#include<stdio.h>
/**
  * fibo_helper - helper for main
  * @length: length of the series
  * Return: nothing
  */
void fibo_helper(int length)
{
	static unsigned long long int num1 = 0, num2 = 1, num3;
	if (length > 0)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf(" %llu,", num3);
		fibo_helper(length - 1);
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
	int num = 0, length = 48;

	printf("%d, %d,", num, num + 1);
	fibo_helper(length);
	printf("\b \n");
	return (0);
}
