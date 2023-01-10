/**
 * _strncat - concatenates two strings based
 * @dest: prefix string
 * @src: sufix string
 * @n: number of suffix characters
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dcnt = 0, scnt = 0, tcnt;
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dcnt++;
	for (i = 0; src[i] != '\0'; i++)
		scnt++;
	if (n < scnt)
	{
		tcnt = dcnt + n;
		for (i = dcnt; i < tcnt; i++)
		{
			if (j < n)
			{
				dest[i] = src[j];
				j++;
			}
		}
	}
	else if (n >= scnt)
	{
		tcnt = dcnt + scnt;
		for (i = dcnt; i < tcnt; i++)
		{
			if (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
			}
		}
	}
	return (dest);
}
