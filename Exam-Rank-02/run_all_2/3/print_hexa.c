#include <unistd.h>

int hexa(int nb)
{
	char *base = "0123456789abcdef";
	if(nb <= 16)
	{
		write(1,&base[nb], 1);
		return 1;
	}
	return(hexa(nb / 16) + hexa(nb % 16));

}

int ft_atoi(char *str)
{
	int i= 0;
	int total = 0;

	while(str[i])
	{
		total = total*10+(str[i] - '0');
		i++;
	}
	return total;
}

int main (int argc , char **argv)
{
	if(argc == 2)
	{
		hexa(ft_atoi(argv[1]));
	}
	write(1,"\n",1);
	return 0;
}