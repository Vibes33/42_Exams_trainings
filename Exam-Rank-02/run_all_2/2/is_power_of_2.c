#include <unistd.h>

int	    is_power_of_2(unsigned int n)
{
	int num = 1;

	while(n >= num)
	{
		if(num == n)
			return 1;
		num *= 2;
	}
	return 0;
}