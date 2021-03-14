#include "libft.h"

char 	*ft_strnstr	(const char *s1, const char *s2, size_t  n)
{
	int i;
	int j;
	size_t len;

	i = 0;
	len = 0;
	if (*s2 == 0)
		return ((char*)s1);
	while (*s1)
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char*)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}