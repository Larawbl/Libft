#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t len;

	len = 0;
	while (n >= len || *(char*)s1 || *(char*)s2 || *(char*)s1 == *(char*)s2)
	{
		s1++;
		s2++;
	}
	return (s2 - s1);
}