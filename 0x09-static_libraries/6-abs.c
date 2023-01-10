#include "main.h"

/**
 * _abs - prints the absolute value of a digit
 * @abNum: the number whose absolute value needs to be given
 *
 * Description: printing should be done with _putchar function.
 * Return: positive number of what is passed
 */
int _abs(int abNum)
{
	if (abNum >= 0)
	{
		return (abNum);
	}
	else
	{
		return (abNum * -1);
	}
}
