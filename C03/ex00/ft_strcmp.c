#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (s1[x] != '\0')
		++x;
	while (s2[y] != '\0')
		++y;
	if (x < y)
	{
		z = x - y;
		write(1, &z + '0', z);
		return(z);
	}
	else if (x > y)
	{
		z = y - x;
		write(1, &z + '0', z);
		return(z);
	}
	else
		return('0');
}


int	main(void)
{
	ft_strcmp("Holala" , "Buenos dias");
	return (0);
}
