#include <unistd.h>

void putnbr(int nb)
{
	char *base = "0123456789abcdef";
	if(nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	write(1,&base[nb],1);
}

int main (int argc , char **argv)
{
	(void) argv;
	if(argc != 0)
	{
		putnbr(argc - 1);
	}
	write(1,"\n",1);
	return 0;
}