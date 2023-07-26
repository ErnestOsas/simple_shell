#include "shell.h"
/**
 *free_grid - Free the allocated memory used
 *@grid: grid pointer
 *@heigth: grid heigth
 */

void free_grid(char **grid, int heigth)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < heigth)
	{
		free(grid[i]);
		i++;
	}
}
