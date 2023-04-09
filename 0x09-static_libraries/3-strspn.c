#include"main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: string
  * @accept: bytes to be found in string
  * Return: Returns the number of bytes in the initial segment of s which cons
  * ist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, breakvalue;

	while (s[i] != '\0')
	{
		j = 0;
		breakvalue = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				breakvalue = 1;
				break;
			}
			j++;
		}
		if (breakvalue == 0)
			break;
		i++;
	}

	return (i);
}
