#include"main.h"
#include<stdlib.h>
/**
  * create_array - creates an array of chars, and initializes it with a speci
  * fic char
  * @size: size of array
  * @c: char init
  * Return: pointer to array or NULL(Failure)
  */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	int i;

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
