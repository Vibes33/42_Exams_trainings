#include <unistd.h>

void putnbr(int nb)
{
	char *base = "0123456789";

	if(nb > 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
	{

		write(1,&base[nb], 1);
	}
}


void fizzbuzz(void)
{
	int i = 1;

	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			write(1,"fizzbuzz", 8);
		}
		else if(i % 3 == 0)
		{
			write(1,"fizz", 4);
		}
		else if(i % 5 == 0)
		{
			write(1,"buzz", 4);
		}
		else
		{
			putnbr(i);
		}
		write(1,"\n",1);
		i++;
	}
}


int main (void)
{
	fizzbuzz();
	return 0;
}