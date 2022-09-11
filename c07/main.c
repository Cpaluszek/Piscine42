#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *tab = ft_range(9,10);

	for (int i = 0; i < sizeof(tab); i++)
		printf("%i ", tab[i]);

}
