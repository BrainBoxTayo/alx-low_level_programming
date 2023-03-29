#include"main.h"

/**
  * _strncpy - copies a string from src into dest using n bytes of src
  * @dest: destination string
  * @src: source string
  * @n: number of bytes
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(dest + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
