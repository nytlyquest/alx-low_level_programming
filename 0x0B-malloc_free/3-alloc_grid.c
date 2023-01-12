#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a 2 dimensional array initialised to 0
 * @width: column of array
 * @height: row of array
 *
 * Return: pointer to array, else NULL
 */
int **alloc_grid(int width, int height)
{
	int w, h, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		arr[h] = (int *)malloc(sizeof(int) * width);
		if (arr[h] == NULL)
			return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			arr[h][w] = 0;
	}
	return (arr);
}
