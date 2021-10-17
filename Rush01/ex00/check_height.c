int check_rowup_height(int  table[4][4], int    height[16])
{
    g_check = 1;
    g_ind_col = 0;
    while(g_ind_col < 4 && g_check)
    {
      g_ind_row = 0;
      g_max_h = 0;
      g_cnt = 0;
      while(g_ind_row < 4 && g_check)
      {
        if (g_max_h < table[g_ind_row][g_ind_col])
        {
          g_max_h = table[g_ind_row][g_ind_col];
          g_cnt++;
        }
        g_ind_row++;
      }
      if (height[g_ind_col] != g_cnt)
        g_check = 0;
      g_ind_col++;
    }
    return (g_check);
}
