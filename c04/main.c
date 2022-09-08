#include <stdio.h>
int	ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("%i\n", ft_atoi_base(" \t -12034", "0123456789ABCDEF"));
}
