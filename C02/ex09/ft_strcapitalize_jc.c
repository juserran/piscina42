#include <unistd.h>

void	ft_strcapitalize(char *str)
{
	int x;
	int p;

	x = 0;
	p = str[x - 1];
	if ((p >= 0 && p <= 47) || (p >= 58 && p <= 64) || (p >= 91 && p <= 96) || (p >= 123 && p <= 126))
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		str[x] = str[x] - 32;
	}
	write(1, str, 1);
	if (str[x] != '\0')
	ft_strcapitalize(str + 1);
}

int     main(void)
{
	char c[100] = "salut, comment tu vas ? 42imots quarante-deux; cinquante+et+un";
	ft_strcapitalize(c);
	return (0);
}
