#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16Num;
	char base16Alpha;

	for (base16Num = 0; base16Num <= 9; base16Num++)
		putchar('0' + base16Num);
	for (base16Alpha = 'a'; base16Alpha <= 'f'; base16Alpha++)
		putchar(base16Alpha);
	putchar('\n');
	return (0);
}
