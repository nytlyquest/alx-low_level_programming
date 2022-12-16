#include "main.h"

/**
 * print_diagonal - prints a backslash symbol a number of times
 * @n: the number of times to print
 *
 * Description: backslash is printed n number of times if n is not 0 or less
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int rhsh, tdt, tfln;

		for (rhsh = 0; rhsh <= n; rhsh++)
		{
			tfln = rhsh;
			if (tfln == 0)
				continue;
			else
			{
				for (tdt = 1; tdt <= tfln; tdt++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
