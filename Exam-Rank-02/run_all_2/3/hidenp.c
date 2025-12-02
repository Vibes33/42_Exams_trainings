#include <unistd.h>

int hide(char *comp, char *str)
{
	int i = 0;
	int j = 0;

	while(str[i])
	{
		if(str[i] == comp[j])
		{
			j++;
		}
		i++;
	}
	return(comp[j] == '\0');
}

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
	if(argc == 3)
	{
		putnbr(hide(argv[1], argv[2]));
	}
	write(1,"\n",1);
	return 0;
}