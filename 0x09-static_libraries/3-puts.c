#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	char *strng;

	strng = str;
	while (*strng != '\0')
	{
		_putchar(*strng);
		strng++;
	}
	_putchar('\n');
}
