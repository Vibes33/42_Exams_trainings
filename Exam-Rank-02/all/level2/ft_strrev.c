char    *ft_strrev(char *str)
{
	char *tmp;
	int i= -1;
	int len = -1;

	while(str[++len]);

	while(len/2 > ++i)
	{
		tmp = str[i];
		str[i] = str[len -1];
		str[len-1] = tmp;
		len--;
	}
	return str;
}