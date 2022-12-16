#include "main.h"

/**
 * print_triangle - prints a triangle with the hash symbol a number of times
 * @size: the number of times to print
 *
 * Description: Hash is printed n number of times if n is not 0 or less
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int rhsh, chsh, tdt, tfln, thsh;

		for (rhsh = 0; rhsh <= size; rhsh++)
		{
			tfln = size - rhsh;
			if (tfln == size)
				continue;
			else
			{
				for (tdt = 1; tdt <= tfln; tdt++)
					_putchar(' ');
			}
			thsh = size - tdt;
			for (chsh = 0; chsh <= thsh; chsh++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
