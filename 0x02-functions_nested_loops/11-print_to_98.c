#include "main.h"

/**
 * print_to_98 - prints numbers from given number to 98
 * @n: passed number
 *
 * Description: printing should be done with _putchar function.
 */
void print_to_98(int n)
{
	int num;
	if (n >= 100)
	{
		for (num = n; num >= 98; num--)
		{
			if (num >= 100)
			{
				_putchar('0' + (num / 100));
				_putchar('0' + ((num - ((num / 100) * 100)) / 10));
				_putchar('0' + (num % 10));
			}
			else
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			if (num == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n >= 98 && n < 100)
	{
		for (num = n; num >= 98; num--)
		{
			_putchar('0' + (num / 10));
			_putchar('0' + (num % 10));
			if (num == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (num = n; num <= 98; num++)
		{
			if (num < 0)
			{
				int pnum = num * -1;
				_putchar('-');
				if (pnum > 0 && pnum < 10)
					_putchar('0' + (pnum % 10));
				else
				{
					_putchar('0' + (pnum / 10));
					_putchar('0' + (pnum % 10));
				}
			}
			else if (num >= 0 && num < 10)
			{
				_putchar('0' + (num % 10));
			}
			else
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
			if (num == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
