#include <unistd.h>

void putnbr(int nb)
{
	char c;

	if(nb >= 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1,&c,1);
	}
}

int main(int argc, char **argv)
{
	(void)argv;
	putnbr(argc - 1);
}