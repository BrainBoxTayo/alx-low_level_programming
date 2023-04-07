#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
/**
  * main - prints the minimum number of coins to make change
  * @argc: number of arguments (should be 2)
  * @argv: names of arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int cents, ctr = 0;

	cents = atoi(argv[argc - 1]);
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			ctr += 1;
		}
		printf("%d\n", ctr);
	}	
	return (0);
}
