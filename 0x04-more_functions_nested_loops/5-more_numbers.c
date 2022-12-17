#include "main.h"

/**
 * more_numbers - prints a range of numbers 10 times
 * Description: numbers 0 through to 14 will be passed
 * Return: Always 0 
 */
void more_numbers (void)
{
	int dig, cnt = 0;

	while (cnt < 10)
	{
		for (dig = 0; dig <= 14; dig++)
		{
			if (dig > 9)
				_putchar('0' + (dig / 10));

			_putchar('0' + (dig % 10));
		}
		_putchar('\n');
		cnt++;
	}
}
