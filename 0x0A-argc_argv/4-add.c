#include <stdio.h>
#include <stdlib.h>

/**
 * main - sums arguments passed
 * @argc: argument counter
 * @argv: string array for arguments
 *
 * Return: 0 when successful else 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else if (*argv[i] >= 'A' && *argv[i] <= 'Z')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
