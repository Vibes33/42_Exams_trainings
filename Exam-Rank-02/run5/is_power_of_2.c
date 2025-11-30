#include <stdio.h>
#include <unistd.h>

int is_power_of_2(unsigned int n)
{
	unsigned int mult = 2;
	unsigned int power = 1;

	while(power <= n)
	{
		if(power == n)
		{
			return(1);
		}
		power = mult * power;
	}
	return(0);
}

int ft_atoi(char *str)
{
	int i = 0;
	int total = 0;
	while(str[i] >= '0' && str[i]<= '9')
	{
		total = total * 10 + (str[i] -'0');
		i++;
	}
	return(total);
}

int main (int argc, char **argv)
{
	int number = 0;
	int result = 0;

	if(argc == 2)
	{
		number = ft_atoi(argv[1]);
	    result = is_power_of_2(number);
		printf("%d\n",result);
		return 0;
	}
	write(1,"\n",1);
	return 0;
}