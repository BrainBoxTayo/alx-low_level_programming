#include"main.h"
/**
  * _islower- used to check for lower or uppercase characters
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
