#include"main.h"
/**
  * _strchr - finds the first occurence of a character in a string
  * @s: string
  * @c: character to be found in string
  * Return: pointer to first occurrence or NULL if it is not found
  */

char *_strchr(char *s, char c)
{
	int i, size;
	char *storer;

	for (size = 0; s[size] != '\0'; ++size)
		;
	for (i = 0; i <= size; i++)
	{
		if (*(s + i) != c)
		{
			storer = '\0';
		}
		if (*(s + i) == c)
		{
			storer = (s + i);
			break;
		}
	}
	return (storer);
}
