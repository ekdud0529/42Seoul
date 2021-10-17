#include <stdio.h>
int g_depth = 0;

void swap(int a, int b,int *table) {
	int temp = table[a];
	table[a] = table[b];
	table[b] = temp;
}

void mk_table(int N, int *table, int table_24[24][4]) {
	if (N == 3) 
	{
		int i = -1;
		while (++i < 4)
			table_24[g_depth][i] = table[i];
		++g_depth;
	}
	else 
	{
		int i = N;
		while (i < 4)
		{
			swap(i, N, table);
			mk_table(N + 1, table, table_24);
			swap(i, N, table);
			++i;
		}
	}
}

void	show_table(int cur_table[4][4], int table_24[24][4], int d)
{
	int i;
	i = 0;
	while (i < 24)
	{
		//할당
		int j;
		j = -1;
		while (++j < 4)
			cur_table[d][j] = table_24[i][j];
		if (d == 3)
		{
			// 이곳에서 테스트를 진행합니다.

			//전체 할당완료
			for (int k = 0; k < 4; k++)
			{
				for (int l = 0; l < 4; l++)
				{
					printf("%d", cur_table[k][l]);
				}
				printf("\n");
			}
			printf("------------------------------------------\n");
			printf("------------------------------------------\n");
		}
		else
			show_table(cur_table, table_24, d + 1);
		++i;
	}
}

int main(void) {
	int table[4]= { 1, 2, 3, 4 };
	int table_24[24][4];
	int cur_table[4][4];
  
	mk_table(0, table, table_24);
	show_table(cur_table ,table_24 ,0);
	return 0;
}
