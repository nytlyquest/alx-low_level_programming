#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char theTxt[8] = {'_','p','u','t','c','h','a','r'};
	int i;

	for (i = 0; i < 8; i++)
		_putchar(theTxt[i]);
	_putchar('\n');
	return (0);
}
