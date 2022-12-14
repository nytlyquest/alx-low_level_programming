#include "main.h"

/**
 * times_table - prints multiplication tablee for 9
 *
 * Description: printing should be done with _putchar function.
 */
void times_table(void)
{
	int row, col, rslt;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9 ; col++)
		{
			rslt = row * col;
			if (rslt < 10)
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
		_putchar('\n');
	}
}
