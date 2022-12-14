#include "main.h"

/**
 * print_last_digit - prints the digit of a number
 * @theNum: the number whose last digit is yo be printed
 *
 * Description: printing should be done with _putchar function.
 * Return: the number modulus 10.
 */
int print_last_digit(int theNum)
{
	if (theNum < 0)
	{
		theNum += 1;
		theNum *= -1;
		theNum = (theNum % 10) + 1;
		_putchar('0' + theNum);
	}
	else
	{
		theNum = theNum % 10;
		_putchar('0' + theNum);
	}
	return (theNum);
}
