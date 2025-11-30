#include <unistd.h>

void expand (char *str)
{
	int i = 0;
	int first = 0;

	while(str[i])
	{
		if(str[i] == ' ')
			i++;
		if(str[i] != ' ')
		{
			if(first == 1)
				write(1,"   ",3);
			first = 1;
			while(str[i] != ' ' && str[i])
			{
				write(1,&str[i],1);
				i++;
			}

		}
	}
}


int main (int argc, char **argv)
{
	if(argc == 2)
	{
		expand(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}