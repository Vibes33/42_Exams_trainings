#include <unistd.h>


void ft_putnbr(int nb)
{
	char c;
	if(nb >= 10)
	{
		ft_putnbr(nb/10);
	}
	c = nb % 10 + '0';
	write(1,&c,1);
}


void fizzbuzz(void)
{
	int i = 1;

	while(i <= 100)
	{
		if(i%3 == 0 && i % 5 == 0)
		{
			write(1,"fizzbuzz",8);
			i++;
		}
		else if(i % 3 == 0)
		{
			write(1,"fizz",4);
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1,"buzz",4);
			i++;
		}
		else
		{
			ft_putnbr(i);
			i++;
		}
		write(1,"\n",1);
	}
}




int main (void)
{
	fizzbuzz();
	return(0);
}