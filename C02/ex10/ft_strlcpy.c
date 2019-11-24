unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int lenght;

	x = 0;
	while (src[x] != '\0' && x < size - 1)
	{
		dest[x] = src[x];
		++x;
		++lenght;
	}
	while (src[lenght] != '\0')
		++lenght;
	dest[x] = '\0';
	return (lenght);
}
