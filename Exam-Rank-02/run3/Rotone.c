#include <unistd.h>

void ft_rotone(char *str)
{
	int i = 0;
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] += 1;
			write(1,&str[i],1);
			i++;
		}
		else if(str[i] == 'z' || str[i] == 'Z')
		{
			str[i] -= 25;
			write(1,&str[i],1);
			i++;
		}
		else
		{
			write(1,&str[i],1);
			i++;

		}

	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rotone(argv[1]);
	}
	write(1, "\n",1);
}