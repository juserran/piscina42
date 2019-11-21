int	ft_str_is_numeric(char *str)
{
	int x;
	int booleano;

	x = 0;
	booleano = 1;
	while (str[x] != '\0' && booleano == 1)
	{
		if (str[x] < '0' || str[x] > '9')
		{
			booleano = 0;
		}
		++x;
	}
	return (booleano);
}
