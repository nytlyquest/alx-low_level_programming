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
		for (numb = 0; numb <= 9; numb++)
		{
			putchar('0' + numa);
			putchar('0' + numb);
			if (numa != 10 && numb != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		if (numa != 9 && numb != 9)
		{
		  	putchar(',');
		  	putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
