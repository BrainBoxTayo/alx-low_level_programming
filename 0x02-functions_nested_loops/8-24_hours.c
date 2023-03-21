#include"main.h"
/**
  * jack_bauer- prints every second of every day
  *
  * Return: returns nothing(void)
  */

void jack_bauer(void)
{
	int hrs = 0, mins = 0;
	while (hrs < 24)
	{
		for (mins = 0; mins < 60; mins++)
		{			
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
		hrs++;
	}
}
