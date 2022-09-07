#include <stdio.h>
#include <string.h>
int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char *base = "01";
	char *src = "1223456";

	printf("string=%s - atoi=%i", ft_atoi_base(src, base));
}
