#include"main.h"
/**
  * _strncat - concatenates two strings
  * @dest: starting string
  * @src: string to be added
  * @n: uses at most n bytes of src
  * Return: a pointer to the string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int size_dest, i;

	for (size_dest = 0; *(dest + size_dest) != '\0'; size_dest++)
		;
	for (i = 0; i < n && *(src + i) != 0; i++)
	{
		*(dest + (size_dest + i)) = *(src + i);
	}
	*(dest + (size_dest + i)) = '\0';
	return (dest);
}
