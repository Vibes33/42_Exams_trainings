#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>



void pgcd(int nb1, int nb2)
{
	int div = 2;
	int result = 0;

	while(div <= nb1 || div <= nb2)
	{
		if(nb1 % div == 0 && nb2 % div == 0)
		{
			result = div;
			div++;
		}
		else
			div++;
	}
	printf("%d",result);
}

int main (int argc, char **argv)
{
	if(argc == 3)
	{
		pgcd(atoi(argv[1]), atoi(argv[2]));
	}
	write(1,"\n",1);
	return 0;
}