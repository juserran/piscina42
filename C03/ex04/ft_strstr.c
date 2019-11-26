#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y])
		{
			++y;
			if (to_find[y] == '\0')
				return (&str[x]);
		}
		++x;
	}
	write(1, str, x);
	return (0);
}

int	main(void)
{
	char string[] = "Hola Mundo";
	char to_find[] = "la Mun";

	*ft_strstr(string, to_find);
	return (0);
}
