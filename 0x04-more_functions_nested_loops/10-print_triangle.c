#include"main.h"
/**
  * print_triangle - prints a triangle
  * @size: length of the triangle
  * Return: nothing(void)
  */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
}
