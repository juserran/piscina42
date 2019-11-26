#include <unistd.h>

char	ft_strstr(char *str, char *to_find)
{
	int x;
	int y;
	char *ret;

	x = 0;
	y = 0;
	ret = '\0';
	if (str[x] == to_find[y])
	{
		ret[y] = str[x];
		ft_strstr(str + 1, to_find + 1);
	}
	else
		ft_strstr(str + 1, to_find);
	ret[y] = '\0';
	write(1, ret, x);
	return(0);
}

int	main(void)
{
	char *string;
	char *to_find;

	string = "Hola Mundo";
	to_find = "la Mun";
	ft_strstr(string, to_find);
	return (0);
}
