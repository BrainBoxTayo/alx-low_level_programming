#include<stdio.h>
#include"main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: difference between the ascii values of the first and second
  * string last characters
  */

int _strcmp(char *s1, char *s2)
{
	int i, store = 0, size_s1, size_s2;

	for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
		;
	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
		;
	if (size_s1 > size_s2)
	{
		for (i = 0; i == size_s1; i++)
		{
			s2[size_s2 + i] = '0';
		}
	}
	if (size_s1 > size_s2)
	{
		store = '0' - (s1[size_s1 - 1] - s2[size_s1 - 1]);
	}
	else if (size_s1 < size_s2)
	{
		store = s2[size_s2 - 1] - '0';
	}
	else
	{
		store = s1[size_s1 - 1] - s2[size_s2 - 1];
	}
	return (store);
}
