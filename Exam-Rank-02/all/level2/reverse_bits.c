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

void reverse_bits(unsigned char octet)
{
	unsigned char reverse = '\0';
	int i = 0;

	for(i = 0; i < 8; i++)
	{
		if(octet & (1 << i))
			reverse |= 1 << (7 - i);
	}
	print_bits(reverse);
	
}


int main (int argc, char **argv)
{
	if(argc == 2)
	{
		reverse_bits(argv[1][0]);
	}
	write(1,"\n",1);
	return 0 ;
}