void  reset(int*num)
{
  intind;

  ind = 0;
  while(ind<4)
    num[ind++] = 0;
}

void  check_row(inttable[], int*check)
{
  int cnt;
  int ind;
  int num[4];

  ind = 0;
  while (cnt < 4 && check)
  {
    reset(&num[0]);
    ind = cnt;
    while (ind < 16 && check)
    {
      if (num[table[ind]-1])
      *check = 0;
      else
      num[table[ind]-1] = 1;
      ind += 4;
      cnt++;
    }
  }
}

voidcheck_col(inttable[], int*check)
{
  intcnt;
  intind;
  intnum[4];

  ind = 0;
  while (ind < 16 && check)
  {
    cnt = 0;
    reset(&num[0]);
    while (cnt < 4 && check)
    {
      if (num[table[ind]-1] == 1)
      *check = 0;
      else
      num[table[ind]-1] = 1;
      cnt++;
      ind++;
    }
  }
}

intcheck_overlap(inttable[])
{
  intcheck;

  check = 1;
  check_row(table, &check);
  check_col(table, &check);

  return (check);
}
