#include <unistd.h>


void putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i], 1);
		i++;
	}
}

void putnbr(int nb)
{
	char *base = "0123456789abcdef";
	if(nb > 10)
	{
		putnbr(nb/10);
		putnbr(nb%10);
	}
	else
		write(1,&base[nb],1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int total = 0;

	while(str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return total;
}


void tab(int nb)
{
	int mult = 1;
	int res = 0;

	while(mult <= 9)
	{
		res = mult * nb;
		putnbr(mult);
		putstr(" X ");
		putnbr(nb);
		putstr(" = ");
		putnbr(res);
		putstr("\n");
		mult++;
	}
}


int main (int argc , char **argv)
{
	if(argc == 2)
	{
		tab(ft_atoi(argv[1]));
	}
	return 0;
}