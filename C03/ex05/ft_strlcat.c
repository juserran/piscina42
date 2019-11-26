unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int lenght;

	x = 0;
	lenght = 0;
	while (dest[lenght] != '\0')
		++lenght;
	while (src[x] != '\0' && x < size - 1)
	{
		dest[lenght] = src[x];
		++x;
		++lenght;
	}
	dest[x] = '\0';
	return (lenght);
}
