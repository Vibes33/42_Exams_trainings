#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void do_op (int nb, char sign, int nb2)
{
	int result = 0;

	if(sign == '*')
	{
		if(nb != 0 && nb2 != 0)
			result = (nb * nb2);
		else
			result = 0;
	}
	else if(sign == '%')
	{
		if(nb != 0 && nb2 != 0)
			result = (nb % nb2);
		else
			result = 0;
	}
	else if(sign == '+')
	{
		result = (nb + nb2);
	}
	else if(sign == '-')
	{
		result = (nb - nb2);
	}
	else if(sign == '/')
	{
		result = (nb / nb2);
	}
	printf("%d\n",result);

}


int main (int argc, char **argv)
{
	if (argc == 4 && !argv[2][1])
	{
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	}
	return 0; 
}