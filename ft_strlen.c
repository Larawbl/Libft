#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}