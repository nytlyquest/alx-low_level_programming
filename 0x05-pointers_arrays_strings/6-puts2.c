#include "main.h"

/**
 * puts2 - prints every other character in a string to stdout
 * @str: pointer to string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, strlen = 0;

	while (str[strlen] != '\0')
		strlen++;
	strlen -= 1;
	for (i = 0; i <= strlen; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
