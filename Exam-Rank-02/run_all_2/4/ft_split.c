#include <stdlib.h>

char	**ft_split(char *str, char c)
{
	char **tab;
	int letter;
	int word = 0;

	if(!str)
		return NULL;
	if(!(tab = malloc(2000 * sizeof(char*))))
		return NULL;
	while(*str)
	{
		while(*str == c)
		{
			str++;
		}
		if(*str)
		{
			tab[word] = malloc(2000);
			letter = 0;
			while(*str && *str != c)
				tab[word][letter++] = *str++;
			tab[word][letter] = '\0';
			word++;
		}
		
	}
	tab[word] = NULL;
	return tab;
}