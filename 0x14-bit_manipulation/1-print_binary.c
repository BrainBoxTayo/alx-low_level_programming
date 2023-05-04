#include"main.h"
/**
  * print_binary - prints the binary representation of a number
  * @n: number to be printed
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	int i = 63;

	while (i >= 0)
	{
		if (n == 0)
		{
			_putchar(48);
			break;
		}
		if ((n >> i) == 0)
		{
			i--;
			continue;
		}
		else if ((n >> i) & 1)
		{
			_putchar(49);
		}
		else
		{
			_putchar(48);
		}
		i--;
	}
}
