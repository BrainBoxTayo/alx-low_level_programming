#include"main.h"
#include<stdlib.h>
/**
  * argstostr - concatenates all the arguments of your program
  * @ac: number of arguments
  * @av: all strings
  * Return: pointer to new string null at failure
  */

char *argstostr(int ac, char **av)
{
	int ic, arr_length = 0, i, j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		/*this gets the length of all the characters for malloc*/
		for (j = 0; av[i][j] != '\0'; j++)
			arr_length++;
		/*this particular line accounts for the /n*/
		arr_length++;
	}
	ptr = malloc((arr_length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = 0, ic = 0; j < ac; ic++, i++)
	{
		if (av[j][i] == '\0')
		{
			ptr[ic] = '\n';
			i = 0;
			j++;
			ic++;
		}
		if (ic < arr_length - 1)
		{
			ptr[ic] = av[j][i];
		}
	}
	ptr[ic] = '\0';
	return (ptr);
}
