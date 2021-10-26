#include <stdlib.h>
#include <stdio.h>

extern int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range;
	printf("%d", ft_ultimate_range(&range, 3, 5));
	int i;
	for(i=0; i<5-3; i++)
		printf("%d ", range[i]);
	return 0;
}
