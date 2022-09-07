#include <stdio.h>
#include <string.h>
int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char *base = "0123456789ABCDEF";
	char *src = "1000";

	printf("string=%d", ft_atoi_base(src, base));
}
