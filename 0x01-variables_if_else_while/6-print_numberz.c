#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int baseTen;

	for (baseTen = 0; baseTen < 10; baseTen++)
		/* '0' + any digit will give you the digit in character form */
		putchar('0' + baseTen);
	putchar('\n');
	return (0);
}
