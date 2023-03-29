#include"main.h"
/**
  * _strcat - concatenates two strings
  * @dest: starting string
  * @src: string to be added
  * Return: a pointer to the string dest
  */

char *_strcat(char *dest, char *src)
{
	int size_dest, size_src, i;

	for (size_dest = 0; *(dest + size_dest) != '\0'; size_dest++)
		;
	for (size_src = 0; *(src + size_src) != '\0'; size_src++)
		;
	for (i = 0; i < size_src; i++)
	{
		*(dest + (size_dest + i)) = *(src + i);
	}
	*(dest + (size_dest + i)) = '\0';
	return (dest);
}
