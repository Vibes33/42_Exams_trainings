#include <unistd.h>


void inter(char *find, char *str)
{
	int i = 0;
	int j= 0;
	int seen[256] = {0};
	unsigned char c;

	while(find[i])
	{
		j = 0;

		while(str[j])
		{
			if(str[j] == find[i])
			{
				c = (unsigned char)find[i];
				if(!seen[c])
				{
					write(1,&c,1);
					seen[c] = 1;
				}
			}
			j++;
		}
		i++;
	}
}



int main (int argc , char **argv)
{
	if(argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1,"\n",1);
	return 0; 
}