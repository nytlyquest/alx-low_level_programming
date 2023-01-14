#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2
 *
 * Return: pointer to allocated memory, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cmpstr;
	unsigned int cnt1 = 0, cnt2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	while (s1[cnt1])
		cnt1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[cnt2])
		cnt2++;
	if (n >= cnt2)
		n = cnt2;
	cmpstr = malloc(cnt1 + n + 1);
	if (cmpstr == NULL)
		return (NULL);
	for (i = 0; i < (cnt1 + n); i++)
	{
		if (i < cnt1)
		{
			cmpstr[i] = s1[i];
			s1++;
		}
		else
		{
			cmpstr[i] = *s2;
			s2++;
		}
	}
	cmpstr[i] = '\0';
	return (cmpstr);
}
