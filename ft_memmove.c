#include "libft.h"

void	*ft_memmove	(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;
	size_t len;

	s = (char*)src;
	d = (char*)dest;
	len = 0;
	while (n > len)
	{
		*s = *d;
		s++;
		d++;
		len++;
	}
	return (dest);
}