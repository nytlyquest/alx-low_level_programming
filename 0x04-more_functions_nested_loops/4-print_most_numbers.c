#include "main.h"

/**
 * print_most_numbers - prints numbers 0 throught to 9 except 2 & 4
 *
 * Description: iteration will occur between 0 and 9
 */
void print_most_numbers(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		if (dig == 2 || dig == 4)
			continue;
		_putchar('0' + dig);
	}
	_putchar('\n');
}
