int	ft_str_is_alpha(char *str)
{
	int x;
	int booleano;

	x = 0;
	booleano = 1;
	while (str[x] != '\0' && booleano == 1)
	{
		if (str[x] < 'A' || str[x] > 'z' || (str[x] > 'Z' && str[x] < 'a'))
		{
			booleano = 0;
		}
		++x;
	}
	return (booleano);
}
