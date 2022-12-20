#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, strlen = 0;

	while (str[strlen] != '\0')
		strlen++;
	strlen -= 1;
	if (strlen % 2 == 1)
	{
		for (i = ((strlen + 1) / 2); i <= strlen; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (strlen / 2); i <= strlen; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
