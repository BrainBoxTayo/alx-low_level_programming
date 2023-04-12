#include"main.h"
#include<stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid
  * @grid: grid from alloc_grid function
  * @height: height of grid
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int **grid_a = grid;
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid_a + i));
	}
	free(grid);
}
