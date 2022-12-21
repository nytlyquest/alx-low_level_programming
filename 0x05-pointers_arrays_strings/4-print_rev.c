#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	s -= cnt;
	for (i = cnt; i >= 1; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
