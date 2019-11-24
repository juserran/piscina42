char	ft_type_character(char *str)
{
	char *type;
	int x;

	x = -1;
	if (str[x] > 'A' && str[x] < 'Z')
		*type = "uppercase";
	else if (str[x] > 'a' && str[x] < 'z')
		*type = "lowercase";
	else if (str[x] > '0' && str[x] < '9')
		*type = "number";
	else
		*type = "symbol";
	return (type);
}

char	*ft_strcapitalize(char *str)
{
	int x;
	*char previous;

	x = 0;
	previous = str[x - 1];
	while (str[x] != '\0')
	{
		ft_type_character(str);
		if (previous == "symbol" && str == "lowercase")
		{
			str[x] = str[x] - 32;
		}
		++x;
	}
	return (str);
}

int	main(void)
{
	*ft_strcapitalize("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	return (0);
}
