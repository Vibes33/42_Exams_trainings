#include <unistd.h>
#include <stdio.h>

int pgcd(int nb, int nb2)
{
	int div = 1;
	int result = 0;

	while(div <= nb || div <= nb2)
	{
		if((nb % div == 0) && (nb2 % div == 0))
		{
			result = div;
		}
		div++;
	}
	return(result);
}

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
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
	int number1 = 0;
	int number2 = 0;
	int result = 0;

	if(argc == 3)
	{
		number1 = ft_atoi(argv[1]);
		number2 = ft_atoi(argv[2]);
	    result = pgcd(number1, number2);
		ft_putnbr(result);
		write(1,"\n",1);
		return 0;
	}
	write(1,"\n",1);
	return 0;
}