#include <unistd.h>

int ft_hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s2[j])
	{
		if(s1[i] == s2[j])
			i++;
		j++;
	}
	return(s1[i] == '\0');
}




int main(int ac, char **av)
{
	int result = 0;
    if (ac == 3)
    {
		result += ft_hidenp(av[1], av[2]);
		if(result == 1)
			write(1,"1",1);
		else
			write(1,"0",1);

    }
    write(1, "\n", 1);
    return 0;
}