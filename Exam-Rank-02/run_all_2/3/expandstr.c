#include <unistd.h>

void expand(char *str)
{

	int i = 0;
	int first = 0;

	while(str[i])
	{
		if(str[i] != ' ' && str[i] != '\t')
		{
			if(first == 1)
				write(1,"   ",3);
			while(str[i] && (str[i] != ' ' && str[i] != '\t'))
			{
				write(1,&str[i],1);
				i++;
			}
			first = 1;
		}
		else
			i++;
	}

}


int main (int argc , char **argv)
{
	if(argc == 2)
	{
		expand(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}