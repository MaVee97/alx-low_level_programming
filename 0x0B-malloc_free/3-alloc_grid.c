#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: function parameter
 * @height: function parameter
 * Return: ointer to array
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **result;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		result[x] = malloc(sizeof(int) * width);

		if (result[x] == NULL)
		{
			free(result);

			for (y = 0; y <= height; y++)
			{
				free(result[y]);
			}
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			result[x][y] = 0;
		}
	}
	return (result);
}
