#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Description: printing should be done with _putchar function.
 */
void print_alphabet(void)
{
	char loAlpha;

	for (loAlpha = 'a'; loAlpha <= 'z'; loAlpha++)
		_putchar(loAlpha);
	_putchar('\n');
}
