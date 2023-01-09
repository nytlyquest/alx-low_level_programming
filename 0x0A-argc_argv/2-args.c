#include <stdio.h>

/**
 * main - all arguments passed
 * @argc: argument counter
 * @argv: string array for arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
