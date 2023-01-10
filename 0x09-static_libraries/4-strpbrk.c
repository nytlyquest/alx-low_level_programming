#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: string criteria
 *
 * Return: pointer to a matching byte in accept or NULL is nothing
 */
char *_strpbrk(char *s, char *accept)
{
	char *req = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = req;
		s++;
	}
	return (NULL);
}
