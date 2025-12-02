#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

void revwstr(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char tab[1000][1000];


	while(str[i])
	{
		j = 0;
		if(str[i] != ' ')
		{
			while(str[i] && str[i] != ' ')
			{
				tab[k][j] = str[i];
				j++;
				i++;
			}
			tab[k][j] = '\0';
			if(j > 0)
				k++;
		}
		else
			i++;
	}

	while(k >= 0)
	{
		ft_putstr(tab[k]);
		if(k > 0)
			ft_putstr(" ");
		k--;
	}
}


int main (int argc, char **argv)
{
	if(argc == 2)
	{
		revwstr(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}