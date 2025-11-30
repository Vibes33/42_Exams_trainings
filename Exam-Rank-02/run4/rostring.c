#include <unistd.h>


void rostring (char *str)
{
	int i = 0;
	int j = 0;
	int first = 0;
	char dest[100];
	dest[0] = '\0';

	while(str[i])
	{
		if(str[i] == ' ')
			i++;
		if(str[i] != ' ' && str[i] != '\0')
		{
			if(first == 0)
			{
				while(str[i] != ' ' && str[i])
				{
					dest[j] = str[i];
					i++;
					j++;
				}
				dest[j] = '\0';
			}
			else
			{
				while(str[i] != ' ' && str[i])
				{
					write(1,&str[i],1);
					i++;
				}
				write(1," ",1);
				
			}
			first = 1;
		}
	}
	j = 0;
	while(dest[j])
	{
		write(1,&dest[j],1);
		j++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		rostring(argv[1]);
	}
	write(1,"\n",1);
	return 0;
}