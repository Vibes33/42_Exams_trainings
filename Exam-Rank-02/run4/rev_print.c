#include <unistd.h>

void ft_rev(char *str)
{
	int i = -1;

	while(str[++i]);

	i -= 1;
	while(i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
}



int main (int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rev(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}