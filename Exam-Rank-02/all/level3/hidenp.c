#include <unistd.h>

int hide(char *hide, char *str)
{
	int i = 0;
	int j = 0;

	while(str[i])
	{
		if(str[i] == hide[j])
		{
			j++;
		}
		i++;
	}
	return(hide[j] == '\0');
}

char putnbr(int nb)
{
	char c;

	if(nb > 10)
	{
		
		putnbr(nb/10);
		putnbr(nb%10);
	}
	c = nb +'0';
	return(c);
}


int main (int argc , char **argv)
{
	int result = 0;
	char res;
	if(argc == 3)
	{
		result = hide(argv[1], argv[2]);
		res = putnbr(result);
		write(1,&res,1);
		
	}
	write(1,"\n",1);
	return 0;
}