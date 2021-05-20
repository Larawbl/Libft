// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int 	count(long n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char 	*ft_itoa(int n)
{
	int count_nb;
	int sign;
	char *dest;
	long num;

	num = n;
	count_nb = count(num);
	sign = 0;
	if (!(dest = (char *)malloc(sizeof(char) * count_nb + 1)))
		return (NULL);
	if (num < 0)
	{
		dest[0] = '-';
		num *= -1;
		sign = 1;
	}
	dest[count_nb] = 0;
	count_nb -= 1;
	while (count_nb >= 0 + sign)
	{
		dest[count_nb] = num % 10 + '0';
		num /= 10;
		count_nb--;
	}
	return (dest);
}