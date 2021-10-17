void    reset(int   *num)
{
    int ind;

  ind = 0;
  while(ind<4)
  num[ind++] = 0;
}

void    check_row(int   table[][4], int *check)
{
    int cnt;
    int ind;
    int num[4];

  ind = 0;
  while (ind < 4 && check)
  {
    reset(&num[0]);
    cnt = 0;
    while (cnt < 4 && check)
    {
      if (num[table[cnt][ind]-1])
        *check = 0;
      else
        num[table[cnt][ind]-1] = 1;
      cnt++;
    }
    ind++;
  }
}

void    check_col(int   table[][4], int *check)
{
  int cnt;
  int ind;
  int num[4];

  ind = 0;
  while (ind < 4 && check)
  {
    cnt = 0;
    reset(&num[0]);
    while (cnt < 4 && check)
    {
      if (num[table[ind][cnt]-1] == 1)
        *check = 0;
      else
        num[table[ind][cnt]-1] = 1;
      cnt++;
    }
    ind++;
  }
}

int check_overlap(int   table[][4])
{
  int check;

  check = 1;
  check_row(table, &check);
  check_col(table, &check);

  return (check);
}
