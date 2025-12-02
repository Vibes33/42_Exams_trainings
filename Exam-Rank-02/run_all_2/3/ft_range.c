int     *ft_range(int start, int end)
{
	int i = 0;
	int *tab;

	int step = (end > start)? 1:-1;
	int len = (end - start) * step + 1;

	if(!(tab = malloc(sizeof(int) * len)))
		return (tab);
	while(i < len)
	{
		tab[i] = start + (step * i); 
		i++;
	}
	return tab;
}