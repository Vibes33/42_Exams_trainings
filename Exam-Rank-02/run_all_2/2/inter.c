#include <unistd.h>

void inter(char *comp, char *str)
{
	int seen[256] = {0};
	int i = 0;
	int j = 0;
	unsigned char c;

	while(comp[j])
	{
		i = 0;
		while(str[i])
		{
			c = (unsigned char) comp[j];
			if(str[i] == comp[j])
			{
				if(!seen[c])
				{
					seen[c] = 1;
					write(1,&c,1);
				}
			}
			i++;
		}
		j++;
	}
}


int main (int argc , char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1,"\n", 1);
	return 0;
}