#include<stdio.h>
/**
  * main - prints all combinations of single digit numbers of base 10
  * Return: returns 0 not 1
  */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (j > k && k > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7)
					{
						putchar('\n');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
}
