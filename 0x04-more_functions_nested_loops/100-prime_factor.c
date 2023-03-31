#include<stdio.h>
#include<math.h>
/**
  * main - prints the largest prime factor of 612852475143
  *
  * Return: 0
  */

int main(void)
{
	unsigned long int num = 612852475143, i, j, prime;

	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			for (j = 3; j < sqrt(num); j += 2)
			{
				if (i % j == 0)
				{
					break;
				}
				else
				{
					prime = i;
				}
			}
		}
	}
	printf("%lu", prime);
	return (0);
}
