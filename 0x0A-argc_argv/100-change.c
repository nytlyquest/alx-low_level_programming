#include <stdio.h>
#include <stdlib.h>

/**
 * chkcent - count of minimum change
 * @sum: keep count
 * @num: cent vaue
 *
 * Return: value in sum
 */
int chkcent(int sum, int num)
{
	int whl, rmdr;
	if (num >= 25)
	{
		whl = num / 25;
		sum += whl;
		rmdr = num % 25;
	}
	else if (num >= 10 && num <= 24)
	{
		whl = num / 10;
		sum += whl;
		rmdr = num % 10;
	}
	else if (num >= 5 && num <= 9)
	{
		whl = num / 5;
		sum += whl;
		rmdr = num % 5;
	}
	else if (num >= 2 && num <= 4)
	{
		whl = num / 2;
		sum += whl;
		rmdr = num % 2;
	}
	else if (num == 1)
	{
		sum++;
		return (sum);
	}
	else
		return (sum);
	return (chkcent(sum, rmdr));
}

/**
 * main - minimum change for arguments passed
 * @argc: argument counter
 * @argv: string array for arguments
 *
 * Return: 0 when successful else 1
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (*argv[1] < 0)
			printf("0\n");
		else
		{
			c = chkcent(0, atoi(argv[1]));
			printf("%d\n", c);
		}
	}
	return (0);
}
