#include "main.h"

/**
 * _islower - checks if a passed letter is in lowercase
 * @c: the letter to be checked
 *
 * Description: printing should be done with _putchar function.
 * Return: 1 if the letter is lowercase and 0 if it is not.
 */
int _islower(int c)
{
	char alphabet;
	int rslt = 0;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == c)
			rslt = 1;
	}
	return (rslt);
}
