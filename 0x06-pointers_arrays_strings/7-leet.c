/**
 * leet - encodes a string into 1337
 * @arr: array
 *
 * Return: the updated array.
 */
char *leet(char *arr)
{
	int j, i = 0;
	char src[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char rplc[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (arr[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] == src[j])
				arr[i] = rplc[j];
		}
		i++;
	}
	return (arr);
}
