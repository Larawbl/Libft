#include "libft.h"

void	*ft_memccpy	(void *dest, const void *src, int c, size_t n)
{
	char *d;
	char *s;
	size_t len;

	d = (char*)dest;
	s = (char*)src;
	len = 0;
	while (n > len)
	{
		*d = *s;
		if  (*d == c)
			return (dest + len + 1);
		d++;
		s++;
		len++;
	}

	return (0);
}