#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	printf("\n\n>------ SPLIT ------\n");
	char **splits = ft_split("Test-de-la+fonction-split--  --double sep+-++--", "- +");
	int i = 0;
	if (splits != 0)
		while (splits[i])
			printf(" > %s\n", splits[i++]);
	printf(" > %s\n", splits[i++]);
	free(splits);
}
