#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conver_hex(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int x;

	x = 0;
	if ((str[x] >= 0 && str[x] <= 31) || str[x] == 127)
		ft_conver_hex(str[x]);
	else
		ft_putchar(str[x]);
	if (str[x] != '\0')
		ft_putstr_non_printable(str + 1);
}

int	main(void)
{
	ft_putstr_non_printable("Co\tucou\ntu vas bi\120en ?");
	return (0);
}
