#include <unistd.h>


void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
void wdm(char *comp, char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char tab[1000];

	while(str[i])
	{
		if(str[i] == comp[j])
		{
			tab[k] = comp[j];
			j++;
			k++;
		}
		i++;
	}
	if(comp[j] == '\0')
	{
		ft_putstr(comp);
	}
}



int main(int argc, char **argv)
{

	if(argc == 3)
	{
		wdm(argv[1], argv[2]);
	}
	write(1,"\n",1);
	return 0;
}