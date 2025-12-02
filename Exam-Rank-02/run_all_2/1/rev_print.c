#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

void revprint(char *str)
{
	int i = ft_strlen(str) - 1;

	while(str[i])
	{
		write(1,&str[i],1);
		i--;
	}

}

int main (int argc, char **argv)
{
	if(argc  == 2)
	{
		revprint(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}