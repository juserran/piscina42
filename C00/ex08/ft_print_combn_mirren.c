#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_recursive_combn(int value, int limit, int count, char *output)
{
	int next_count;
	int next_limit;
	int next_value;

	next_count = count + 1;
	next_limit = limit + 1;
	next_value = value + 1;
	output[count] = value + '0';
	if (limit == 9)
	{
		write(1, output, next_count);
		if (value != 9)
			ft_recursive_combn(next_value, limit, count, output);
	}
	else
	{
		ft_recursive_combn(next_value, next_limit, next_count, output);
	}
}

void    ft_print_combn(int n)
{
	int limit;
	char *output;
	int value;
	int count;

	limit = 10 - n;
	value = 0;
	count = 0;
	output = (char *) malloc(n);
	ft_recursive_combn(value, limit, count, output);
}

int     main(void)
{
	ft_print_combn(3);
	return(0);
}
