#include"main.h"
/**
  * print_diagonal - prints a diagonal of size n
  * @n: size of diagonal
  * Return: nothing(void)
  */

void print_diagonal(int n)
{
	int i, j, linechecker = 1;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i  ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		linechecker = 0;
	}
	if (linechecker)
	{
		_putchar('\n');
	}
}
