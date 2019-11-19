char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	
	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		++x;
	}
	while (x < n)
	{
		dest[x] = '\0';
		++x;
	}
	return (dest);
}
