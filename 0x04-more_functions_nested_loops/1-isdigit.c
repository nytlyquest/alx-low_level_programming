/**
 * _isdigit - checks for uppercase character
 * @c: the input to be checked
 *
 * Description: characters of the alphabet will be passed
 * Return: rtn is 1 if uppercase and 0 if otherwise
 */
int _isdigit(int c)
{
	char dig;
	int cdig, rtn = 0;

	for (dig = 0; dig <= 9; dig++)
	{
		for (cdig = '0'; cdig <= '9'; dig++)
		{
			if (c == dig || c == cdig)
				rtn = 1;
		}
	}
	return (rtn);
}
