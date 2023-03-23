#include"main.h"
/**
  * print_triangle - prints a triangle
  * @size: length of the triangle
  * Return: nothing(void)
  */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			if (i == size)
			{
				break;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
