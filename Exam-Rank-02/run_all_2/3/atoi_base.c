#include <stdio.h>

int	ft_atoi_base(const char *str, int base)
{
	char *result = (char *)str;
	int i = 0;
	int sign = 1;
	int total = 0;

	if(result[i] =='-' || result[i] == '+')
	{
		if(result[i] == '-')
			sign *= -1;
		i++;
	}
	while(result[i])
	{
		if(result[i] >= '0' && result[i] <= '9')
			total = total * base + (result[i] - '0');
		else if(result[i] >= 'A' && result[i] <= 'F')
			total = total * base + (result[i] - '7');
		else if(result[i] >= 'f' && result[i] <= 'f')
			total = total * base + (result[i] - 'W');
		i++;
	}
	return (total * sign);
}

// int main(void)
// {
// 	printf("%d", ft_atoi_base("FF", 16));
// }