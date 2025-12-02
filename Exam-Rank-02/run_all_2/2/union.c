#include <unistd.h>

int main (int ac, char **av)
{

	if(ac == 3)
	{
		int seen[256] = {0};
		unsigned char c;
		int i = 0;

		while(av[1][i])
		{
			c = (unsigned char)av[1][i];
			if(!seen[c])
			{
				seen[c] = 1;
				write(1,&c,1);
			}
			i++;
		}

		i = 0;
			
		while(av[2][i])
		{
			c = (unsigned char)av[2][i];
			if(!seen[c])
			{
				seen[c] = 1;
				write(1,&c,1);
			}
			i++;
		}

		i = 0;
	}
	write(1,"\n",1);
	return 0;
}