
#include <unistd.h>

void s_to_c(char *str)
{
	int i = 0;
	int first = 0;
	while(str[i])
	{
		if(str[i] == '_')
			i++;
		else
		{
			if(first == 1)
			{
				str[i] -= 32;
			}
			while(str[i] && str[i] != '_')
			{
				write(1,&str[i],1);
				i++;
			}
			first = 1;
		}
	}
}


int main (int argc, char **argv)
{
	if(argc == 2)
	{
		s_to_c(argv[1]);

	}
	write(1,"\n",1);
	return 0 ;
}