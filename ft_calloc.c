#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *dest;

	if (count == 0 || size == 0)
		return (0);
	if (!(dest = malloc(sizeof(size_t)*(size * count))))
		return (0);
	ft_bzero(dest, count);
	return (dest);
}