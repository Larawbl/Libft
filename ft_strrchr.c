char 	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	s--;
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s--;
	}
	return (0);
}