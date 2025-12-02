#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long int nb = nbr;
	int len = (nb < 0)? 1 : 0;
	char *str;
	long int tmp = nb;

	if(nb < 0)
	{
		nb = -nb;
		len++;
	}
	while(nb > 0)
	{
		nb /= 10;
		len ++;
	}
	if(!(str = malloc(len + 1)))
		return NULL;
	str[len] = '\0';
	if(nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while(nb > 0)
	{
		str[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return str;
}