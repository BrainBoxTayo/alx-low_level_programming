#include"main.h"
/**
  * times_table - prints the tables of multiplication from 0 - 9
  *
  * Return: nothing
  */

void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multi = i * j;
			if (multi > 9)
			{
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
			else if(j != 0)
			{
				_putchar(' ');
				_putchar(multi % 10 + '0');
			}
			else if (j == 0)
			{
				_putchar(multi % 10 + '0');
			}
		
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
