char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int x;
	unsigned  int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		++x;
	while (src[y] != '\0' && y < nb)
	{
		dest[x] = src[y];
		++x;
		++y;
	}
	dest[x] = '\0';
	return (dest);
}

int	main(void)
{
	*ft_strncat("Hola Mundo", "Bye World", 3);
	return (0);
}
