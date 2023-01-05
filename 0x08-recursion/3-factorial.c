#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number
 * Return: factorial of number, else nothing
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
