#include "shell.h"/**
 * free_grid - Free the allocated memory used
 * @grid: grid pointer
 * @height: Grid height
 */
void free_grid(char **grid, int height)
{
        int i;        if (!grid)
                return;
        for (i = 0; i < height; i++)
                free(grid[i]);
        free(grid);
}
