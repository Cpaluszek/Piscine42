#include <stdio.h>
#include <string.h>
char *ft_strstr(char *src, char *to_find);

int main(void)
{
	char *src = "123456 ";
	char *to_find = "56 ";
	char *result = ft_strstr(src, to_find);
	printf("ft_ptr=%p\n", result);
	char *result2 = strstr(src, to_find);
	printf("ptr=%p\n", result2);
}
