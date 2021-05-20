#include "libft.h"

char 	*ft_strnstr	(const char *s1, const char *s2, size_t  n)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s2 == 0)
		return ((char*)s1);
	while (s1[i] && n > i)
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0' && n > (i + j))
				return ((char*)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}