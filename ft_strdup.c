#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dest;
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	if (!(dest = (char*)malloc(sizeof(char)*(len + 1))))
		return (0);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}