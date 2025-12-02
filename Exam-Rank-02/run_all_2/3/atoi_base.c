#include <unistd.h>


int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int total = 0;

	if(str[i] == '-')
	{
			sign *= -1;
		i++;
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			total = total * 10 + (str[i] - '0');
		else if(str[i] >= 'A' && str[i] <= 'F')
			total = total * 10 + (str[i] - '7');
		else if(str[i] >= 'a' && str[i] <= 'f')
			total = total * 10 + (str[i] - 'W');		
	}
	return(sign * total);
}