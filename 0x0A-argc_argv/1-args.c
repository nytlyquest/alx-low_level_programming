#include <stdio.h>

/**
 * main - the count of argument passed
 * @argc: argument counter
 * @argv: string array for arguments
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
