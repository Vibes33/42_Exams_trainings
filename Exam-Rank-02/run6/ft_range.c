#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *tab;
	int i = 0;
	int step = (end > start) ? 1:-1;
	int len = (end - start) * step +1;

	if(!(tab = malloc(sizeof(int) * len)))
		return NULL;
	while(i < len)
	{
		tab[i] = start +(i*step);
		i++;
	}
	return tab;
}