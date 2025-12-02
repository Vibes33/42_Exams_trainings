#include <stdlib.h>

char	**ft_split(char *str, char c)
{
	char	**tab;
	int		word;
	int		letter;

	if (!str)
		return (NULL);
	tab = malloc(1000 * sizeof(char *));
	if (!tab)
		return (NULL);
	word = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			tab[word] = malloc(2000);
			letter = 0;
			while (*str && *str != c)
				tab[word][letter++] = *str++;
			tab[word][letter] = '\0';
			word++;
		}
	}
	tab[word] = NULL;
	return (tab);
}