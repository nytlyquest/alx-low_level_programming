#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numa, numb;

	for (numa = 0; numa <= 9; numa++)
	{
		for (numb = numa + 1; numb <= 9; numb++)
		{
			putchar('0' + numa);
			putchar('0' + numb);
			if (numa == 8 && numb == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
