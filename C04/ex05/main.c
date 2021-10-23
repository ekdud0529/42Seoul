#include <stdio.h>

extern int ft_atoi_base(char *str, char *base);

int main(){
	printf("%d", ft_atoi_base("  --+--+1234ab567", "0123456789ABCDEF"));
	return 0;
}

