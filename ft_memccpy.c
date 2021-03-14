#include "libft.h"

void	*ft_memccpy	(void *dest, const void *src, int c, size_t n)
{
	char *d;
	char *s;
	size_t len;

	d = (char*)dest;
	s = (char*)src;
	len = 0;
	while (n > len && *d != c)
	{
		*d = *s;
		d++;
		s++;
		len++;
	}
	if  (*d == c)
	{
		d++;
		return (d);
	}
	return (0);
}