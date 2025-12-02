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

void rostring(char *str)
{
	char tab[1000];
	int i = 0;
	int j = 0;
	int first = 0;

	while(str[i])
	{
		if(str[i] != ' ')
		{
			if(first == 0)
			{
				while(str[i] && str[i] != ' ')
				{
					tab[j] = str[i];
					j++;
					i++;
				}
				tab[j] = '\0';
			}
			else
			{
				while(str[i] && str[i] != ' ')
				{
					write(1,&str[i],1);
					i++;
				}
				write(1," ",1);
			}
			first = 1;
		}
		else
		{
			i++;
		}
	}
	if(tab[0] != '\0')
	{
		ft_putstr(tab);
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		rostring(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}