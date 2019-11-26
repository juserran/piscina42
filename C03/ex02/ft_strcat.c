char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		++x;
	while (src[y] != '\0')
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
	*ft_strcat("Hola Mundo", "Bye World");
	return (0);
}
