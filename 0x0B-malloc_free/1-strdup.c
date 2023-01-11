#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: pointer to string
 *
 * Return: pointer to duplicate string, else NULL
 */
char *_strdup(char *str)
{
	int cnt = 0, i = 0;
	char *arr;

	if (str[cnt] == NULL)
		return (NULL);
	if (str[cnt] == '\0')
		return (NULL);
	while (str[cnt] != '\0')
		cnt++;
	arr = malloc(sizeof(*arr) * cnt);
	while (i < cnt)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
