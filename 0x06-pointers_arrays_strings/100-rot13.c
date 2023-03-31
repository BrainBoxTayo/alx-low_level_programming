#include"main.h"
#include<stdio.h>
/**
  * rot_13 - encodes a string into rot_13
  * @str: string to be encoded
  * Return: pointer to str
  */

char *rot_13(char *str)
{
	int i, j = 0;
	char array_main[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstwxyz"
		;
	char array_rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefgh
		ijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		do {
			if (str[i] == array_main[j])
			{
				str[i] = array_rot_13[j];
				break;
			}
			j++;
		} while (array_main[j]);
	}
	return (str);
}
