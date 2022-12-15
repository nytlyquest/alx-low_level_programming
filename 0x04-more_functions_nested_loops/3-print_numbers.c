#include "main.h"

/**
 * print_numbers - prints numbers 0 throught to 9
 *
 * Description: iteration will occur between 0 and 9
 */
void print_numbers(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
		_putchar('0' + dig);
	_putchar('\n');
}
