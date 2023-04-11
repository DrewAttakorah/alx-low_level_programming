#include "main.h"

/**
 * free_grid - my function
 *
 * @grid : size of memory to be reserved
 * @height : character
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height ; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
