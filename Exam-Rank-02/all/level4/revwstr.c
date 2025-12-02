#include <unistd.h>
void putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

void rev(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char tab[100][1000];


	while(str[i])
	{
		j = 0;
		if(str[i] != ' ')
		{
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
		else
			i++;
	}

	k--;
	while(k >= 0)
	{
		putstr(tab[k]);
		if(k > 0)
			putstr(" ");
		k--;
	}
}


int main (int argc, char **argv)
{
	if(argc == 2)
	{
		rev(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}