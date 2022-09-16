#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{

		/*printf(">------ STRDUP ------\n");
	char *copy = 0;
	copy = ft_strdup("Test de la chaine a copier"); 
	printf("copy = %s\n", copy);
	free(copy);*/
	
	//int min = -2147;//48364;
	//int max = 2147;//48364;
	/*printf("\n>------ RANGE ------\n");
   	int *tab = ft_range(min, max);
	for (long i = 0; i < (long)(max-min); i++)
		printf("%i ", tab[i]);
	free(tab);

	printf("\n\n>------ ULTIMATE RANGE ------\n");
	int *tab2 = NULL;
	int size = ft_ultimate_range(&tab2, min, max);
	if (size > 0)
		for (int i = 0; i < size; i++)
			printf("%i ", tab2[i]);
	free(tab2);*/

	printf("\n\n>------ STRJOIN ------\n");
	if (argc > 1)
	{
		char **strs = argv + 1;
		char *join = ft_strjoin(argc - 1, strs, "-+-");
		if (join != 0)
			printf("join = %s", join);
		free(join);
	}

	printf("\n\n>------ CONVERT BASE ------\n");
	char *convert = ft_convert_base(NULL/*"   ---++-- 12345"*/, "0123456789", "0123456789ABCDEF");
	if (convert != 0)
		printf("convert = %s\n", convert);
	free(convert);
	convert = ft_convert_base("   -utuuts", "salut", "0123456789");
	if (convert != 0)
		printf("convert = %s\n", convert);
	free(convert);

	printf("\n\n>------ SPLIT ------\n");
	printf("Test-de-la+fonction-split----double sep  | sep = \'+-e\'\n");
	char **splits = ft_split("Test-de-la+fonction-split----double-sep", "-+e");
	int i = 0;
	if (splits != 0)
		while (splits[i] && splits[i] != 0)
			printf(" > %s\n", splits[i++]);
	free(splits);
}
