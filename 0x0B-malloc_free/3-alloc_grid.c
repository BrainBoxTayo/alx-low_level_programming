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
	int **two_d, i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	two_d = malloc(height * sizeof(int *));
	if (two_d == NULL)
	{
		free(two_d);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(two_d + i) = malloc(width * sizeof(int *));
		if (*(two_d + i) == NULL)
		{
			for (l = 0; l < i; l++)
				free(*(two_d + l));
			free(two_d);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			two_d[j][k] = 0;
		}
	}
	return (two_d);
}
