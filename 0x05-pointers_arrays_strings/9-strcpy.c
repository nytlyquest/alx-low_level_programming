/**
 * _strcpy - updates the pointer value
 * @dest: buffer
 * @src: pointer to string
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *str = dest;
	while (*src)
		*dest++ = *src++;
	return (str);
}
