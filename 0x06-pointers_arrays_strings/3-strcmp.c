/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, rst = 0, dcnt = 0, scnt = 0;

	for (i = 0; s1[i] != '\0'; i++)
		dcnt++;
	for (i = 0; s2[i] != '\0'; i++)
		scnt++;
	if (dcnt <= scnt)
	{
		for (i = 0; i < dcnt; i++)
		{
			if (s1[i] != s2[i])
			{
				rst = s1[i] - s2[i];
				break;
			}
			else
				continue;
		}
	}
	else
	{
		for (i = 0; i < scnt; i++)
		{
			if (s1[i] != s2[i])
			{
				rst = s1[i] - s2[i];
				break;
			}
			else
				continue;
		}
	}
	return (rst);
}
