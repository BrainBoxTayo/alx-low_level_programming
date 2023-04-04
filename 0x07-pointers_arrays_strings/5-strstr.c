#include"main.h"

/**
  * _strstr - finds a substring in a string
  * @haystack: string
  * @needle: substring
  * Return: pointer to the beginning if located substring
  */

char *_strstr(char *haystack, char *needle)
{
	char *hayvar, *neevar;

	while (*haystack != 0)
	{
		hayvar = haystack;
		neevar = needle;
		while (*haystack == *neevar && *neevar != '\0')
		{
			haystack++;
			neevar++;
		}
		/* if neevar gets to \0 the loop above exits and comes to the if
		 * statement else if neevar does not get to \0 the if statement is
		 * not true*/
		if (!*neevar)
			return (hayvar);
		haystack++;
	}
	return ('\0');
}
