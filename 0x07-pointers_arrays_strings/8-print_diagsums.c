#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums the diagonal
 * @a: square array
 * @size: size of array
 *
 * Return: Always void
 */
void print_diagsums(int *a, int size)
{
	int i, j, arrsize = size * size, ldsum = 0, rdsum = 0;

	for (i = 0; i < arrsize; i += size + 1)
		ldsum += a[i];
	for (j = size - 1; j < arrsize - 1; j += size - 1)
		rdsum += a[j];

	printf("%d, %d\n", ldsum, rdsum);
}
