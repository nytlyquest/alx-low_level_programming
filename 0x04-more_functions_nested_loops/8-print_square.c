#include "main.h"

/**
 * print_square - prints a hash symbol a number of times
 * @size: the number of times to print
 *
 * Description: Hash is printed n number of times if n is not 0 or less
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
