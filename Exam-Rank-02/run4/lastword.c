#include <unistd.h>
#include <stdio.h>


void last(char *str)
{
	int i = -1;

	while(str[++i]);

	if(i != 0)
		i = i - 1;
	while(i > 0)
	{

		
		if(str[i] == ' ')
		{
			while(i > 0 && str[i] == ' ')
				i--;
		}
		while(i != 0 && str[i] != ' ')
		{
			i--;
		}
		break;
	}

	while(str[i])
	{
		if(str[i] != ' ' && str[i] != '\0')
		{
			write(1,&str[i],1);
			i++;
		}
		else
		{
			i++;
		}
	}
}



int main (int argc, char **argv)
{
	if(argc == 2)
	{
		last(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}