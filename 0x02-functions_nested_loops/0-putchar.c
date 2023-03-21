#include"main.h"
#include<unistd.h>
/**
  * main - prints the string _putchar
  *
  * Return: returns 0 (success)
  */

int main(void)
{
	char string[] = "_putchar\n";
	int index = 0;

	do {
		_putchar (string[index]);
		index++;
	} while (string[index] != '\n');
	_putchar ('\n');
	return (0);
}
