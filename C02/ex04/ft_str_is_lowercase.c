int	ft_str_is_lowercase(char *str)
{
	int x;
	int booleano;
	while (str[x] != '\0' && booleano == 1)
	{
		if (str[x] < 'a' || str[x] > 'z')
		{
			booleano = 0;
		}
		++x;
	}
	return (booleano);
}
