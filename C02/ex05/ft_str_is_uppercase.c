int	ft_str_is_uppercase(char *str)
{
	int x;
	int booleano;

	x = 0;
	booleano = 1;
	while (str[x] != '\0' && booleano == 1)
	{
		if (str[x] < 'A' || str[x] > 'Z')
		{
			booleano = 0;
		}
		++x;
	}
	return (booleano);
}
