#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case x10
 *
 * Description: printing should be done with _putchar function.
 */
void print_alphabet_x10(void)
{
	char loAlpha;
	int i = 0;

	while (i < 10)
	{
		for (loAlpha = 'a'; loAlpha <= 'z'; loAlpha++)
			_putchar(loAlpha);
		_putchar('\n');
		i++;
	}
}
