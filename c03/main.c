#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
	
	//int own  = ft_strlcat(dest, src, 13);
	int own = strlcat(dest, src, 13);
	printf("return=%i --- str=%s\n", own, dest);
}
