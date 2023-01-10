/**
 * _strlen - returns length of a string
 * @s: pointer to string
 *
 * Return: length of array.
 */
int _strlen(char *s)
{
	char *strngPtr;
	int i = 0;

	strngPtr = s;
	while (*strngPtr != '\0')
	{
		i++;
		strngPtr++;
	}
	return (i);
}
