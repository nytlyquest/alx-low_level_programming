#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numa, numb, numc;

	for (numa = 0; numa <= 9; numa++)
	{
		for (numb = numa + 1; numb <= 9; numb++)
		{
			for (numc = numb + 1; numc <= 9; numc++)
			{
				putchar('0' + numa);
				putchar('0' + numb);
				putchar('0' + numc);
				if (numa == 7 && numb == 8 && numc == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
