#include <stdio.h>
#include <string.h>
int	ft_strcatp(char *dest, char *src);

int main(void)
{
	char s1[] = "a111";
	char s2[] = "a122";

	char * own = ft_strcat(s1, s2);
	printf(">> own=%s\n", own);

	s1 = "a111";
	s2 = "a122"
	char *expected = strcat(s1, s2);

	printf(">> expected=%s\n", expected);

}
