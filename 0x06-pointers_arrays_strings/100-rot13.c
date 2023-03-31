#include<ctype.h>
#include"main.h"
#include<stdio.h>
/**
  * rot13 - encodes a string to rot13 crypt
  * @str: string to be encoded
  * Return: pointer to str
  */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) && ((str[i] >= 65 && str[i] <= 77)
			|| (str[i] >= 97 && str[i] <= 109)))
		{
			str[i] += 13;
		}
		else if (isalpha(str[i]) && ((str[i] >= 78 && str[i] <= 90)
			|| (str[i] >= 110 && str[i] <= 122)))
		{
			str[i] -= 13;
		}
	}
	return (str);
}
