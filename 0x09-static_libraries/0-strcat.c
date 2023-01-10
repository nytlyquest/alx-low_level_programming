/**
 * _strcat - concatenates two strings
 * @dest: prefix string
 * @src: sufix string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dcnt = 0, scnt = 0, tcnt;
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dcnt++;
	for (i = 0; src[i] != '\0'; i++)
		scnt++;
	tcnt = dcnt + scnt;
	for (i = dcnt; i < tcnt; i++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
		}
	}
	return (dest);
}
