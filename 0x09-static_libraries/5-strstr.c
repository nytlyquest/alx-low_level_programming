#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds first occurrence of a string
 * @haystack: primary string
 * @needle: string to be found
 *
 * Return: pointer to a beginning of aubatring or NULL is nothing
 */
char *_strstr(char *haystack, char *needle)
{
	char *arr = haystack, *str = needle;

	while (*haystack)
	{
		arr = haystack;
		needle = str;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = arr + 1;
	}
	return (NULL);
}
