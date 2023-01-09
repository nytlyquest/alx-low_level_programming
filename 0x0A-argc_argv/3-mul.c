#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments passed
 * @argc: argument counter
 * @argv: string array for arguments
 *
 * Return: 0 when successful else 1
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);
		return (0);
	}
}
