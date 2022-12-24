/**
 * cap_string - capitalises all wprds pf a string
 * @arr: array
 *
 * Return: the updated array.
 */
char *cap_string(char *arr)
{
	int i = 0, j;
	char wrdspt[];

	wrdspt = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	while (arr[i])
	{
		if (i == 0 && (arr[i] >= 'a' && arr[i] <= 'z'))
			arr[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if ((arr[i] == wrdspt[j]) && (arr[i + 1] >= 'a' && arr[i + 1] <= 'z'))
				arr[i + 1] -= 32;
		}
		i++;
	}
	return (arr);
}
