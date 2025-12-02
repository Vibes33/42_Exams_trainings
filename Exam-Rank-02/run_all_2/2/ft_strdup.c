#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i; 
}

char    *ft_strdup(char *src)
{
	char *dest;
	int j = 0;
	int i = 0;

	dest = malloc(sizeof (char *) * ft_strlen(src)+1);
	while(src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest ;
}