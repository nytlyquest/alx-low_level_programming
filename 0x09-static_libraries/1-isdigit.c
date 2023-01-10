#include "main.h"

/**
 * _isdigit - a function that checks for digit 0 - 9
 * @c: the input to be checked
 *
 * Description: characters of the alphabet will be passed
 * Return: rtn is 1 if uppercase or 0 if otherwise
 */
int _isdigit(int c)
{
	char dig;
	int rtn = 0;

	for (dig = '0'; dig <= '9'; dig++)
	{
		if (c == dig)
			rtn = 1;
	}

	return (rtn);
}
