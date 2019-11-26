int	ft_strlen(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		++x;
		++str;
	}
	return(x);
}
