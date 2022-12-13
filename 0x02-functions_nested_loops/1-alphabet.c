#include "main.h"

/**
 * print_alphabet() - prints the alphabet in lower case
 * @loAlpha: The variable holding earch alphabet through the loop
 */
void print_alphabet(void)
{
	char loAlpha;

	for (loAlpha = 'a'; loAlpha <= 'z'; loAlpha++)
		_putchar(loAlpha);
	_putchar('\n');
}
