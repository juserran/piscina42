#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conver_hex(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
	if (c > 16)
		ft_conver_hex(c);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int x;
	char *data;

	x = 0;
	data = (unsigned char *)addr;
	if (size == 0)
		return;
	if (x == 0)
	{
		ft_conver_hex(&data[x]);
		ft_putchar(':');
		++x;
	}
	else
	{
		while (x <= 16)
		{
			ft_conver_hex(data[x]);
			if (x % 2 == 0) || (size != 16 && addr[x] > 126)
				ft_putchar(' ');
			++x;
		}
	}
	x = 0;
	while (x <= 16)
	{
		ft_putchar(data[x]);
		++x;
	}
}

int	main(void)
{
	char c[16] = "Bonjour les amin";
	*ft_print_memory(c , 16);
	return (0);
}	
