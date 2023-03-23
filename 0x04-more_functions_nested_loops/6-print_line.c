#include"main.h"
/**
  * print_line - prints a line of size n
  * @n: size of line
  * Return: nothing(void)
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
