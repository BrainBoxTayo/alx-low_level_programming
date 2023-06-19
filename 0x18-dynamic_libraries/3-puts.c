#include"main.h"
#include<stdio.h>
/**
  * _puts - prints a string then a newline to stdout
  * @str: string to be inputed
  * Return: nothing
  */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 00)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
