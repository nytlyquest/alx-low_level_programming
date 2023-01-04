#include "main.h"

/**
 * _strspn - shows lenegth of bytes in the initial segment
 * @s: string
 * @accept: string criteria
 *
 * Return: return cnt
 */
unsigned int _strspn(char *s, char *accept)
{
	int cnt = 0, mrk;
	char *req = accept;

	while (*s)
	{
		mrk = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				cnt++;
				mrk = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = req;
		if (mrk == 0)
			break;
	}
	return (cnt);
}
