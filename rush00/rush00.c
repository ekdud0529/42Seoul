void rush(int x, int y)
{
	int	cnt_y;

	cnt_y = 1;
	while(cnt_y <= y)
	{
		if(cnt_y == 1 || cnt_y == y)
		{
			ft_putchar('o', 1);
			ft_putchar('-', x - 2);
			if(x > 1)
				ft_putchar('o', 1);
		}
		else
		{
			ft_putchar('|', 1);
			ft_putchar(' ', x - 2);
			if(x > 1)
				ft_putchar('|', 1);
		}
		ft_putchar('\n', 1);
		cnt_y++;
	}
}
