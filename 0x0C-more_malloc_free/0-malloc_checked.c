#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size
 *
 * Return: pointer to allocated memory, else 98
 */
void *malloc_checked(unsigned int b)
{
	void *locsize;

	locsize = malloc(b);
	if (locsize == NULL)
		exit(98);
	return (locsize);
}
