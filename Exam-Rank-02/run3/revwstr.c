#include <unistd.h>

void	rev_wstr(char *str)
{
	int i;
	int start;
	int end;
	int first;

	// Aller à la fin de la chaîne
	i = 0;
	while (str[i])
		i++;
	i--;            // se placer sur le dernier caractère utile

	first = 1;
	while (i >= 0)
	{
		// Sauter les espaces de fin / entre les mots
		while (i >= 0 && str[i] == ' ')
			i--;
		if (i < 0)
			break;

		// Fin du mot
		end = i;

		// Remonter jusqu'au début du mot
		while (i >= 0 && str[i] != ' ')
			i--;
		start = i + 1;

		// Ajouter un espace *entre* les mots (mais pas avant le premier)
		if (!first)
			write(1, " ", 1);
		first = 0;

		// Afficher le mot de start à end
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
