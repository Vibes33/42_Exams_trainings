#include <unistd.h>

int first(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == ' ')
		{
			i++;
		}
		else
		{
			while(str[i] && str[i] != ' ')
			{
				write(1,&str[i],1);
				i++;
			}
			return 1 ;
		}
	}
	return 0;
}



int main (int argc, char **argv)
{
	if(argc == 2)
	{
		first(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}