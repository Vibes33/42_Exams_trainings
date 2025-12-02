#include <unistd.h>

void sar(char *str, char a, char r)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == a)
		{
			write(1,&r,1);
			i++;
		}
		else
		{
			write(1,&str[i],1);
			i++;
		}
	}
}

int main (int argc, char **argv)
{
	if(argc == 4)
	{
		sar(argv[1], argv[2][0], argv[3][0]);
	}
	write(1,"\n",1);
	return 0;
}