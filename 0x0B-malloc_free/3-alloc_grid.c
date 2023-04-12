#include"main.h"
#include<stdlib.h>
/**
  * alloc_grid - function that returns a pointer to a 2 dimensional array of
  * integers
  * @width: X axis
  * @height: Y axis
  * Return: pointer to a 2 dimensional array of integers
  */

int **alloc_grid(int width, int height)
{
	int **two_d, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	two_d = malloc(width * sizeof(int *));
	if (two_d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(two_d + i) = malloc(height * sizeof(int *));
		if (*(two_d + i) == NULL)
			return (NULL);
	}
	return (two_d);
}
