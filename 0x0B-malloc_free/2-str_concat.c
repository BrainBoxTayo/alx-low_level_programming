#include"main.h"
#include<stdlib.h>
/**
  * str_concat - concatenates two strings.
  * @s1: string input
  * @s2: string input
  * Return: The returned pointer should point to a newly allocated space in
  * memory which contains the contents of s1, followed by the contents of s2,
  * and null terminated
  */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		;
	for (i = 0; s1[i] != '\0'; i++)
		;
	/*k stores the size of i and j*/
	k = i + j;
	newstr = malloc((k * sizeof(char)) + 1);
	if (newstr == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
	{
		newstr[l] = s1[l];
	}
	for (; l < k; l++, j--)
	{
		newstr[l] = s2[l - i];
	}
	newstr[l] = '\0';
	return (newstr);
}

