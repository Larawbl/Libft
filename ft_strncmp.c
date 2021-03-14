#include "libft.h"

int 	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = 0;
	while (*s1 && *s2 && *s1 == *s2 && n > len)
	{
		s1++;
		s2++;
		len++;
	}
	return (s2 - s1);
}