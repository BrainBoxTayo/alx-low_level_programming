#include"main.h"
#include<stdio.h>
/**
  * print_rev - prints a string then a newline to stdout
  * @s: string to be inputed
  * Return: nothing
  */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != 00; ++i)
		;

	while (i != 0)
	{
		_putchar(*(s + (i - 1)));
		i--;
	}
	_putchar('\n');
}
