#include <unistd.h>

void	ft_repeat(char str, int size)
{
	while(size >= 0)
	{
		write(1,&str,1);
		size--;
	}
}

void repalp(char *str)
{
	int i = 0;
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <='z'))
		{
			ft_repeat(str[i], str[i] - 'a');
		}
		else if(str[i] >= 'A' && str[i] <='Z')
		{
			ft_repeat(str[i], str[i] - 'A');
		}
		else{
			write(1,&str[i],1);
		}
		i++;
	}
}

int main (int argc , char **argv)
{
	if(argc == 2)
	{
		repalp(argv[1]);
	}
	write(1,"\n",1);
	return 0 ;
}