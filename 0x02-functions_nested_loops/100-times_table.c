#include<stdlib.h>
#include"main.h"
/**
  * print_times_table - prints the tables of multiplication from 0 - n
  * @n: value to be counted up to
  *
  * Return: nothing
  */

void print_times_table(int n)
{
	int i, j, multi;

	if (n < 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;
				if (multi > 9 && multi < 100)
				{
					_putchar(' ');
					_putchar(multi / 10 + '0');
					_putchar(multi % 10 + '0');
				}
				else if (multi > 99)
				{
					_putchar((multi / 100) + '0');
					_putchar((multi / 10) % 10 + '0');
					_putchar((multi % 10) + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(multi % 10 + '0');
				}
				else if (j == 0)
				{
					_putchar(multi % 10 + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
