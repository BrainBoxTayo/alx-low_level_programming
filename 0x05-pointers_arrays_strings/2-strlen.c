#include"main.h"
/**
  * _strlen - returns the length of a string
  * @s: string to be tested
  * Return: length of the string
  */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != 00)
	{
		i++;
	}
	return (i);
}
