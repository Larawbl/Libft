#include "libft.h"

int check(char str, char const *set)
{
	int j;

	j = 0;
	while (set[j])
	{
		if (str == set[j])
			return (1);
		j++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	int i;
	int min;
	int max;

	i = 0;
	if (s1 == 0)
		return (0);
	if (!(dest = (char*)malloc(sizeof(char)*(ft_strlen(s1) + 1))))
		return (0);
	while (check(s1[i], set) == 1)
		i++;
	min = i;
	while (s1[i])
		i++;
	i--;
	while (check(s1[i], set) == 1)
		i--;
	max = i;
	i = 0;
	while (min <= max)
	{
		dest[i] = s1[min];
		min++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}