void rush(int x, int y)
{
	int cnt_y;
	int cnt_x;

	cnt_y = 1;
	while(cnt_y <= y)
	{
		cnt_x = 1;
		while(cnt_x =< x && cnt_y == 1 || cnt_y == y && cnt_x <= x)
		{
			if(cnt_y == 1 && cnt_x == 1 || cnt_y == y && cnt_x == x)
				ft_putchar('A', 1);
			else if(cnt_x == x && cnt_y == 1 || cnt_y == y && cnt_x == 1)
				ft_putchar('C', 1);
			else if(cnt_x != 1 && cnt_x != x && cnt_y == y && cnt_x ==1)
				ft_putchar(' ', 1);
			else
				ft_putchar('B', 1);
			cnt_x++;
		}
		cnt_y++;
		ft_putchar('\n', 1);
	}
}
