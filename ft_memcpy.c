#include "libft.h"

void	*ft_memcpy (void *dest, const void *src, size_t n)
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
		d++;
		s++;
		len++;
	}
	return (dest);
}