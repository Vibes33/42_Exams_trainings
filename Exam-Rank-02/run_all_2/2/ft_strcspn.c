#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = -1;
	int j;

	while(s[++i])
	{
		j = -1;
		while(s[i] == reject[++j]) return i;
	}
	return i;
}