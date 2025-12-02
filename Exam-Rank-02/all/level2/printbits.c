#include<unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;

	while(i > 0)
	{
		if(octet & 1 << (i -1))
			write(1,"1",1);
		else
			write(1,"0",1);
		i--;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		print_bits(argv[1][0]);
	}
	write(1,"\n",1);
	return 0 ;
}