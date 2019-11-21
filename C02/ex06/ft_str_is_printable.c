int	ft_str_is_printable(char *str)
{
	int x;
	int booleano;

	x = 0;
	booleano = 1;
	while (str[x] != '\0' && booleano == 1)
	{
		if (str[x] < ' ' || str[x] > '~')
		{
			booleano = 0;
		}
		++x;
	}
	return (booleano);
}
