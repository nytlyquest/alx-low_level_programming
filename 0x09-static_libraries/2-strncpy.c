/**
 * _strncpy - concatenates two strings based
 * @dest: prefix string
 * @src: sufix string
 * @n: number of suffix characters
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dcnt = 0, scnt = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dcnt++;
	for (i = 0; src[i] != '\n'; i++)
	{
		if (src[i] != '\0')
			scnt++;
	}
	if (n < scnt)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else if (n >= scnt)
	{
		for (i = 0; i < scnt; i++)
			dest[i] = src[i];
		for (; i < dcnt; i++)
			dest[i] = '\0';
	}
	return (dest);
}
