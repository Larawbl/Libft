#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dest;
	int len;

	len = 0;
	while (s[len])
		len++;
	if (!(dest = (char*)malloc(sizeof(char)*(len + 1))))
		return (0);
	while (len > 0)
	{
		*dest = *s;
		dest++;
		s++;
		len--;
	}
	return (dest);
}