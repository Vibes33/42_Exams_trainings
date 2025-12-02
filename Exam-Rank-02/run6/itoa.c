#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int count(int nb)
{
	int len = 0;

	if(nb == 0)
		return(1);
	if(nb < 0)
	{
		nb *= -1;
		len++;
	}
	while(nb)
	{
		nb /= 10;
		len++;
	}
	return(len);
}

char *ft_itoa(int nb)
{
	int len;
	char *res;

	if(nb == -2147483648)
		return ("-2147483648");
	len = count(nb) + 1;
	if(!(res = malloc(sizeof(char)*len + 1)))
		return (NULL);
	res[len - 1] = '\0';
	len --;
	if(nb == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return res;
	}
	if(nb < 0 )
	{
		nb *= -1;
		res[0] = '-';
	}
	while(nb)
	{
		res[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return res;
}

int	main(void)
{
	printf("%s", ft_itoa(42));
}