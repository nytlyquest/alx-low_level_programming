#include "main.h"

/**
 * chk_prime - check if a number is prime
 * @num: number
 * @mv: comparison number
 *
 * Return: 1 if prime, 0 if not
 */
int chk_prime(int num, int mv)
{
	if (mv == num)
		return (1);
	else if (num % mv == 0)
		return (0);
	else
		return (chk_prime(num, mv + 1));
}

/**
 * is_prime_number - prime number or not
 * @n: number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	else
		return (chk_prime(n, 2));
}
