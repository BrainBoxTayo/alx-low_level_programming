#include"main.h"
#include<stdio.h>
/**
  * rev_string - reverses a string 
  * @s: string to be reversed
  * Return: nothing
  */

void rev_string(char *s)
{
	int size;
	int ctr;
	char store;

	/*get size without strlen*/
	for (size = 0; *(s + size) != 00; ++size)
		;
	/*loop to half of string length, I think this is a sorting algo*/
	for (ctr = 0; ctr < size / 2; ++ctr)
	{
		store = s[ctr];
		s[ctr] = s[size - 1 - ctr];
		s[size - 1 - ctr] = store;
	}
}
