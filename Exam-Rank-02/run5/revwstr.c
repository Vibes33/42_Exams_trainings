#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int revwstr(char *str)
{
	int i = 0;
	int k = 0;
	int j = 0;

	char tab[100][1000];

	while(str[i])
	{
		j = 0;
		while(str[i] == ' ')
		{
			i++;
		}
		
		while(str[i] && str[i] != ' ')
		{
			tab[k][j] = str[i];
			i++;
			j++;
		}
		
		tab[k][j] = '\0';
		if(j > 0)
			k++;
		
	}

	k--;
	j = 0;
	while(k >= 0)
	{
		while(tab[k][j])
		{
			write(1,&tab[k][j],1);
			j++;
		}
		if(k > 0)
			write(1," ",1);
		j = 0;
		k--;
	}
	return 0;
}



int main (int argc, char **argv)
{
	if(argc == 2)
	{
		revwstr(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}