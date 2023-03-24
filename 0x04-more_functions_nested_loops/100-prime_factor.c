#include<stdio.h>
/**
  * main - prints the largest prime factor of 612852475143
  *
  * Return: 0
  */

int main(void)
{
	unsigned long long int num = 612852475143;
	int i, j;
	int prime;

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			for (j = 2; j < i / 2; j++)
			{
				if (i % j == 0)
				{
					break;
				}
				else
				{
					prime = i;
					printf("%llu\n", prime);
				}
			}
		}
	}
	return (0);
}
