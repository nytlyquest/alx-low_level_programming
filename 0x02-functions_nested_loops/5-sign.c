#include "main.h"

/**
 * print_sign - prints the sign of a digit
 * @n: number to be evaluated
 *
 * Description: printing should be done with _putchar function.
 * Return: 1 if number is positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
