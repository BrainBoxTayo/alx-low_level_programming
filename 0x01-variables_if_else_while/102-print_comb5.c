#include<stdio.h>
/**
  * main - entry func
  *
  * Return: returns zero (0) always
  */
int main(void)
{
	int i,j,k,l;

	for (i = 0; i < 99; i++)
	{
		putchar(i + '0');
		putchar(j + '0');
		for (j = i; j < 99; j++)
		{
			for( k = 1; k < 99; k++)
			{
				for(l = 1; l < 99; l++)
				{
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
				}
			}
		}
	}
	return (0);
}
