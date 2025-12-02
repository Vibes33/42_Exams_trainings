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


void last(char *str)
{
	int i = 0;
	int j = 0;
	char tab[1000];

	while(str[i])
	{
		if(str[i] != ' ')
		{
			while(str[i] && str[i] != ' ')
			{	
				tab[j] = str[i];
				i++;
				j++;
			}
			tab[j] = '\0';
			j = 0;
		}
		else
			i++;
	}
	j = 0;
	ft_putstr(tab);
	
}


int main(int ac, char **av) {
    if (ac == 2) 
	{
		last(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}