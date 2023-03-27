#include<stdio.h>
#include"main.h"
/**
  * puts2 - prints every other character(even)
  * @str: this is the string
  * Return: nothing
  */

void puts2(char *str)
{
	int i = 0;
	int size;

	for (size = 0; str[size] != '\0'; ++size)
		;
	while (i != size)
	{
		if(i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
