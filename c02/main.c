#include <stdio.h>
char *ft_strcapitalize(char *str);
int main(void)
{
	char src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *p = &src[0];

	p = ft_strcapitalize(p);


	for(int i = 0; i < 61; i++)
	{
		printf("%c", src[i]);
	}
}
