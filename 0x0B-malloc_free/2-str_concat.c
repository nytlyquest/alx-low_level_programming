#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: nothing
 */
char *str_concat(char *s1, char *s2)
{
	int cnt1 = 0, cnt2 = 0, i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	while (s1[cnt1] != '\0')
		cnt1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[cnt2] != '\0')
		cnt2++;
	arr = malloc(sizeof(*arr) * (cnt1 + cnt2 + 1));
	if (arr == NULL)
		return (NULL);
	while (i < cnt1)
	{
		arr[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (i < cnt2)
	{
		arr[j] = s2[i];
		j++;
		i++;
	}
	arr[j] = '\0';
	return (arr);
}
