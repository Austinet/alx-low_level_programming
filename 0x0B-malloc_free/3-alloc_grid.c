#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - initializes a grid of integers to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to the grid or NULL if unsuccessful
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width < 1 || height < 1)
return (NULL);

grid = malloc(height * sizeof(int));

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(**grid));

if (grid[i] == NULL)
{
for (i--; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
