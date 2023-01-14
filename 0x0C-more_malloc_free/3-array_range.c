#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array initialised to range of elements
 * @min: minumum inclusive element
 * @max: maximum inclusive element
 *
 * Return: pointer to allocated memory, else NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, rng;

	if (min > max)
		return (NULL);
	rng = max - min;
	arr = malloc((rng + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= rng; i++)
		arr[i] = min++;
	return (arr);
}
