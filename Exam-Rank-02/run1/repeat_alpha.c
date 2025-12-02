#include <unistd.h>

void repeat(char *str)
{
	int i = 0;
	int j = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] + 1 - 'a';
			while(j > 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i]  + 1 - 'A';
			while(j > 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		repeat(argv[1]);
	write(1,"\n",1);
	return(0);
}
