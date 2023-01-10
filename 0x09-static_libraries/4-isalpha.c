#include "main.h"

/**
 * _isalpha - checks if a passed letter is in uppercase
 * @c: the letter to be checked
 *
 * Description: printing should be done with _putchar function.
 * Return: 1 if the letter is lowercase and 0 if it is not.
 */
int _isalpha(int c)
{
	char lowAlpha, upAlpha;
	int rslt = 0;

	for (upAlpha = 'A'; upAlpha <= 'Z'; upAlpha++)
	{

		for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
		{
			if (upAlpha == c || lowAlpha == c)
				rslt = 1;
		}
	}
	return (rslt);
}
