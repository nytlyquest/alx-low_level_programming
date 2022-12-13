#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numa, numb;

	for (numa = 0; numa <= 98; numa++)
	{
		for (numb = numa + 1; numb <= 99; numb++)
		{
			putchar('0' + (numa / 10));
			putchar('0' + (numa % 10));
			putchar(' ');
			putchar('0' + (numb / 10));
			putchar('0' + (numb % 10));
			if (numa == 98 && numb == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
