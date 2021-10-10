extern void	ft_putchar(char c, int n);

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if (col == 1 && row == 1)
				ft_putchar('/', 1);
			else if (row == x && col == y && y != 1 && x != 1)
				ft_putchar('/', 1);
			else if ((row == 1 && col == y) || (row == x && col == 1))
				ft_putchar('\\', 1);
			else if (row != 1 && row != x && col != y && col != 1)
				ft_putchar(' ', 1);
			else
				ft_putchar('*', 1);
			row++;
		}
		col++;
		ft_putchar ('\n', 1);
	}
}
