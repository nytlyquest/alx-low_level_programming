#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable declariation by type */
	char charSize;
	int intSize;
	long int longintSize;
	long long int longlongintSize;
	float floatSize;
	/* printing using the function size of */
	printf("Size of a char: %d byte(s)\n", sizeof(charSize));
	printf("Size of an int: %d byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %d byte(s)\n", sizeof(longintSize));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintSize));
	printf("Size of a float: %d byte(s)\n", sizeof(floatSize));
	return (0);
}
