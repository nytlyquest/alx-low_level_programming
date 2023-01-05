#include "main.h"

/**
 * chk_sqr - find square of number
 * @strt: number to square
 * @num: number to compare
 *
 * Return: number whose square satisfies
 */
int chk_sqr(int strt, int num)
{
	if (strt > num)
		return (-1);
	else if (strt * strt == num)
		return (strt);
	else
		return (chk_sqr(strt + 1, num));
}

/**
 * _sqrt_recursion - squareroot of a number
 * @n: number
 *
 * Return: squareroot, or -1 when nothing
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (chk_sqr(1, n));
}
