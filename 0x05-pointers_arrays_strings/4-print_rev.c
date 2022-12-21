#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
		cnt++;
	while (cnt)
	{
		--cnt;
		_putchar(s[cnt]);
	}
	_putchar('\n');
}
