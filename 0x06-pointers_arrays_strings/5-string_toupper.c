/**
 * string_toupper - converts lowercase to uppercase
 * @arr: array
 *
 * Return: the updated array.
 */
char *string_toupper(char *arr)
{
	int i, ltr, acnt = 0;
	char tup;

	for (i = 0; arr[i] != '\0'; i++)
		acnt++;
	for (i = 0; i < acnt; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			ltr = arr[i];
			ltr -= 32;
			tup = ltr;
			arr[i] = tup;
		}
	}
	return (arr);
}
