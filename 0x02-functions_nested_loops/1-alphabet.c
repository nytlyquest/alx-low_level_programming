#include "main.h"

/**
 * print_alphabet() - external function
 *
 * Description: prints the alphabet in lower case
 *
 */
void print_alphabet(void)
{
	char loAlpha;

	for (loAlpha = 'a'; loAlpha <= 'z'; loAlpha++)
		_putchar(loAlpha);
	_putchar('\n');
}
