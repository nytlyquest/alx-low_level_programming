#include "main.h"

/**
 * puts2 - prints every other character in a string to stdout
 * @str: pointer to string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	char *strng;

	strng = str;
	while (*strng != '\0')
	{
		_putchar(*strng);
		strng += 2;
	}
	_putchar('\n');
}
