#include <unistd.h>

void ft_putchar(char c, int n)
{
	while(n--){
		if(n < 0)
			break;
		write(1, &c, 1);
	}
}
