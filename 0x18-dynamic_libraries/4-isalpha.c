#include"main.h"
/**
  * _isalpha- used to check if a letter is in the alphabet
  * @c: this stores the value to be tested
  *
  * Return: returns 1 if c is a letter, otherwise return 0
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
