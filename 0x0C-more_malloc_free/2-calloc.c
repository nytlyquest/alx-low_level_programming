#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *locarr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	locarr = malloc(nmemb * size);
	if (locarr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(locarr + i) = 0;
	return (locarr);
}
