#include"main.h"
#include<stdio.h>
/**
  * leet - encodes a string into 1337
  * @str: string to be encoded
  * Return: pointer to str
  */

char *leet(char *str)
{
	int i, j = 0;
	int array_main[] = {97, 101, 111, 116, 108};
	int array_leet[] = {52, 51, 48, 55, 49};

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		do {
			if (str[i] == array_main[j] || str[i] == array_main[j] + 32)
			{
				str[i] = array_leet[j];
				break;
			}
			j++;
		} while (array_main[j]);
	}
	return (str);
}
