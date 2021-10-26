#include <stdio.h>

extern char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	int size = 3;
	char *h[3];
	h[0] = "hello";
	h[1] = "gohome";
	h[2] = "sleep";
	char *sep = "HHH";
	
	printf("%s", ft_strjoin(size, &h, sep));
	return 0;
}

