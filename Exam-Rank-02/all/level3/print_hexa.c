#include <unistd.h>
#include <stdlib.h>

unsigned int hexa(unsigned int nb)
{
	char *base = "0123456789abcdef";

	if(nb <= 16)
	{
		write(1,&base[nb],1);
		return 1;
	}
	return(hexa(nb / 16) + hexa(nb % 16));
}


unsigned int ft_atoi(char *str)
{
	unsigned int total =  0;
	unsigned int i =0;
	while(str[i] >= '0' && str[i]<= '9')
	{
		total = total*10+(str[i] -'0');
		i++;
	}
	return(total);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		hexa(ft_atoi(argv[1]));
	}
}