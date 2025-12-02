int calc(int nb)
{
	int len = 1;

	
	if(nb < 0)
	{
		nb *= -1;
		len++;
	}
	while(nb > 9)
	{
		nb /= 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int nbr)
{
	
}