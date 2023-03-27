#include<stdio.h>
#include"main.h"

/**
  * _strcpy - copies a string from a source to a buffer
  * @dest: points to buffer
  * @src: points to string
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i, size;

	for (size = 0; src[size] != '\0'; size++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[size] = '\0';
	return (dest);
}
