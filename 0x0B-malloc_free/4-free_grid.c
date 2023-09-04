#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints a grid of integers
 * @grid: the addresses of the 2d grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
	
