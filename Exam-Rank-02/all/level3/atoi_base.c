#include <unistd.h>
#include<stdlib.h>
#include <stdio.h>

int	ft_atoi_base(const char *str, int base)
{
	char * result = (char *)str;
	int sign = 1;
	int total;
	int i = 0;

	if(result[i] == '-')
	{
		sign *= -1;
		i++;
	}
	total = 0;
	while(result[i])
	{
		if(result[i] >= '0' && result[i] <= '9')
			total = total * base + result[i] - '0';
		else if(result[i] >= 'A' && result[i] <= 'F')
			total = total * base + result[i] - '7';
		else if(result[i] >= 'a' && result[i] <= 'f')
			total = total * base + result[i] - 'W';

		i++;
	}
	return (sign * total);
}


#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("12FDB3", 16));
	return (0);
}