#include "main.h"

/**
 * print_times_table - prints multiplication tablee for 9
 * @n: multiplication size
 *
 * Description: printing should be done with _putchar function.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		continue;

	int row, col, rslt;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n ; col++)
		{
			rslt = row * col;
			if (col == 0)
				_putchar('0' + rslt);
			else if (rslt < 10)
			{
				_putchar(' ');
				_putchar('0' + rslt);
			}
			else
			{
				_putchar('0' + (rslt / 10));
				_putchar('0' + (rslt % 10));
			}
			if (col == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
