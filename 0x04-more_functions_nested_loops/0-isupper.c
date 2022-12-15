#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the input at to be checked
 *
 * Description: characters of the alphabet will be passed
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	char alph;
	int rtn = 0;

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		if (c == alph)
			rtn = 1;
	}
	return (rtn);
}
