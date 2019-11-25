#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		write(1, dest[x], 1);
		++x;
}
	while (src[x] != '\0')
	{
		dest[x + y] = src[y];
		write(1, dest, 1);
		++y;
	}
	dest[x + y] = '\0';
	return (dest[x + y]);
}	

int	main(void)
{
	*ft_strcat("Hola Mundo", "Bye World");
	return (0);
}
