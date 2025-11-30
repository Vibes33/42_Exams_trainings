#include <unistd.h>

unsigned int hexa(unsigned int nb)
{
	char *base;
	base = "0123456789abcdef";

	if(nb < 16)
	{
		write(1,&base[nb],1);
		return (0);
	}
	return(hexa(nb / 16) + hexa(nb % 16));

}

int ft_atoi(char *str)
{
	int i = 0;
	int total = 0;
	while(str[i] >= '0' && str[i]<= '9')
	{
		total = total * 10 + (str[i] -'0');
		i++;
	}
	return(total);
}

int main (int argc, char **argv)
{
	int result = 0;
	if(argc == 2)
	{
		result = ft_atoi(argv[1]);
		if(result < 0)
		{
			write(1,"\n",1);
			return 0;
		}
		hexa(result);
	}
	write(1,"\n",1);
	return 0;
}