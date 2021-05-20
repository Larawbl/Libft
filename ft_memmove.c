#include "libft.h"
#include <stdio.h>

// void	*ft_memmove	(void *dest, const void *src, size_t n)
// {
// 	char *s;
// 	char *d;
// 	size_t i;
// 	char tmp;

// 	s = (char*)src;
// 	d = (char*)dest;
// 	i = 0;
// 	while (n > i)
// 	{
// 		tmp = s[i];
// 		d[i] = tmp;
// 		i++;
// 	}
// 	return (d);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (src < dst && src + len >= dst)
	{
		i = len;
		d = dst;
		s = src;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main(int argc, char const *argv[])
// {
// 	(void)argc;
// 	(void)argv;

// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	dest = src + 1;
// 	printf("%s\n", ft_memmove(dest, src, 8));
// 	return 0;
// }