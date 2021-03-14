#include "libft.h"

void	ft_bzero	(void *s, size_t n)
{
	char *str;
	size_t i;
	int c;

	c = 0;
	str = (char*)s;
	i = 0;
	while (n >= i)
	{
		str[i] = c;
		i++;
	}
}