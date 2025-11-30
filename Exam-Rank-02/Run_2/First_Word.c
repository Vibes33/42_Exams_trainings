#include <unistd.h>
#include <stdio.h>

char *first_word(char *str)
{
	int i = 0;
	while(str[i] == ' ')
	{
			i++;	
	}
	return(&str[i]);
}



int main (int argc, char **argv)
{
	char *result;
	int i = 0;

	if(argc == 2)
	{
		result = first_word(argv[1]);

		while(result[i] != ' ' && result[i])
		{
			write(1,&result[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}