#include <unistd.h>

int first(char *str)
{
	int i= 0;
	while(str[i])
	{
		if(str[i] !=' ' && str[i] != '\t')
		{
			while(str[i] && (str[i] !=' ' && str[i] != '\t'))
			{
				write(1,&str[i],1);
				i++;
			}
			return 0;
		}
		else
			i++;
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