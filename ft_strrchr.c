char 	*ft_strrchr(const char *s, int c)
{
	char *dest;
	int i;

	dest = (char*)s;
	i = 0;
	while (dest[i])
		i++;
	if (c == 0)
		return (dest + i);
	i--;
	while (i >= 0)
	{
		if (dest[i] == c)
			return (dest + i);
		i--;
	}
	return (0);
}