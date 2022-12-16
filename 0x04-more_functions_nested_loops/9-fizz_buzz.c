#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 1; dig <= 100; dig++)
	{
		if (dig % 3 == 0 && dig % 5 == 0)
			printf("FizzBuzz ");
		else if (dig % 3 == 0)
			printf("Fizz ");
		else if (dig % 5 == 0)
		{
			if (dig == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", dig);
	}
	return (0);
}
