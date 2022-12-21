#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer to string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int cnt = 0;
	int i = 0;
	char strchar;
	
	while (s[cnt] != '\0')
		cnt++;
	while (i < cnt--)
	{
		strchar = s[i];
		s[i++] = s[cnt];
		s[cnt] = strchar;
	}
}
