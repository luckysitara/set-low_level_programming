#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **me;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	me = malloc(sizeof(int *) * height);

	if (me == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		me[x] = malloc(sizeof(int) * width);

		if (me[x] == NULL)
		{
			for (; x >= 0; x--)
				free(me[x]);

			free(me);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			me[x][y] = 0;
	}

	return (me);
}
