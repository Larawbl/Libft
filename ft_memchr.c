#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	size_t len;

	str = (char*)s;
	len = 0;
	while (n > len && *str)
	{
		if (*str == c)
			return (str);
		len++;
		str++;
	}
	return (0);
}