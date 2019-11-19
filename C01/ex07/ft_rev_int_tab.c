void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int y;

	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		ft_swap(&tab[x], &tab[y]);
		++x;
		--y;
	}
}
