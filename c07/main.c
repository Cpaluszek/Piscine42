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

		printf(">------ STRDUP ------\n");
	char *copy = 0;
	copy = ft_strdup("Test de la chaine a copier"); 
	printf("copy = %s\n", copy);
	free(copy);
	
	printf("\n>------ RANGE ------\n");
   	int *tab = ft_range(1, 100);
	for (int i = 0; tab[i] < 99; i++)
		printf("%i ", tab[i]);
	free(tab);

	printf("\n\n>------ ULTIMATE RANGE ------\n");
	int *tab2 = NULL;
	int size = ft_ultimate_range(&tab2, -2, 25);
	if (size > 0)
		for (int i = 0; i < size; i++)
			printf("%i ", tab2[i]);
	free(tab2);

	printf("\n\n>------ STRJOIN ------\n");
	if (argc > 1)
	{
		char **strs = argv + 1;
		char *join = ft_strjoin(argc - 1, strs, "-%-");
		if (join != 0)
			printf("join = %s", join);
		free(join);
	}

	printf("\n\n>------ CONVERT BASE ------\n");
	printf("   ---++--12345, 0123456789, 0123456789ABCDEF\n");
	char *convert = ft_convert_base("   ---++--12345", "0123456789", "0123456789ABCDEF");
	if (convert != 0)
		printf("convert = %s\n", convert);
	free(convert);
	printf("\n   --12345, 0123456789, 01\n");
	convert = ft_convert_base("   --12345", "0123456789", "01");
	if (convert != 0)
		printf("convert = %s\n", convert);
	free(convert);

	printf("\n\n>------ SPLIT ------\n");
	printf("Test-de-la+fonction-split----double sep  | sep = \'+-\'\n");
	char **splits = ft_split("Test-de-la+fonction-split----double-sep", "-+");
	int i = 0;
	if (splits != 0)
		while (splits[i] && splits[i] != 0)
			printf(" > %s\n", splits[i++]);
	free(splits);
}
