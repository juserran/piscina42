#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int x;
	int p;

	x = 0;
	p = str[x - 1];
	if ((p < 48 || p > 57) && (p < 65 || p > 90) && (p < 97 || p > 122))
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		str[x] -= 32;
	}
	write(1, str, 1);
	if (str[x] != '\0')
		ft_strcapitalize(str + 1);
	return (str);
}

int     main(void)
{
	char c[100] = "salut, comment tu vas ? 42imots quarante-deux; cinquante+et+un";
	*ft_strcapitalize(c);
	return (0);
}
