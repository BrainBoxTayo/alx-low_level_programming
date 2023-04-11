#include"main.h"
#include<stdlib.h>
/**
  * _strdup -  returns a pointer to a newly allocated space in memory, w
  * hich contains a copy of the string given as a parameter
  * @str: string input
  * Return:  returns a pointer to a new string which is a duplicate of the str
  * ing str. Memory for the new string is obtained with malloc, and can be fre
  * ed with free.
  * Returns NULL if str = NULL
  */
char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	newstr = malloc(i * sizeof(char) + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i + 1] = '\0';
	return (newstr);
}

