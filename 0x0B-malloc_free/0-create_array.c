#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: array size
 * @c: character to initialize array with
 *
 * Return: pointer to array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	if (arr == 0)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
