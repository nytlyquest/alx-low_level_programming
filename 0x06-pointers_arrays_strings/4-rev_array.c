/**
 * reverse_array - compares two strings
 * @a: array
 * @n: number of elements in array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, mid, tmp;

	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		tmp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = tmp;
	}
}
