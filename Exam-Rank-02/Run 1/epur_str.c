#include <unistd.h>

void epur_str(char *str)
{
	int first = 0;
	int i = 0;

	while(str[i] == ' ')
	{
		i++;
	}

	while(str[i])
	{
		if(str[i] && str[i] != ' ')
		{
			if(first == 1)
				write(1," ",1);
			first = 1;
			while(str[i] && str[i] != ' ')
			{
				write(1,&str[i],1);
				i++;
			}
		}
		else
			i++;
	}
}



int main (int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1,"\n",1);
	return(0);
}