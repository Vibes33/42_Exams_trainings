#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int pgcd (int nb, int nb2)
{
	int result = 0;
	int div = 1;

	while(div <= nb && div <= nb2)
	{
		if(nb % div == 0 && nb2 % div == 0)
		{
			result = div;
		}
		div++;
	}
	return result;
}

int main (int argc , char **argv)
{
	if(argc == 3)
	{
		printf("%d",pgcd(atoi(argv[1]), atoi(argv[2])));
	}
	write(1,"\n",1);
	return 0;
}