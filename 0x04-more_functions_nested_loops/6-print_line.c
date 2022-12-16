#include "main.h"

/**
 * print_line - prints an underscore a number of times
 * @n: the number of times to print
 *
 * Description: Underscore is printed n number of times if n is not 0 or less
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
