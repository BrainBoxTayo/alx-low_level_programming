#include"main.h"

/**
  * puts_half - prints half of the string
  * @str: string to be printed
  * Return: nothing
  */

void puts_half(char *str)
{
	int i = 0;
	int size;
	/*gets the size without strlen*/
	for (size = 0; *(str + size) != '\0'; ++size)
		;
	/*this gets half of the string for even lengths*/
	if (size % 2 == 0)
	{
		for (i = size / 2; str[i] != '\0'; ++i)
		{
			_putchar(*(str + i));
		}
	}
	/*this gets half of the string for odd lengths*/
	else
	{
		for (i = ((size - 1) / 2) + 1; str[i] != '\0'; ++i)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
