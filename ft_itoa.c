/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:33:18 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 16:49:59 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count(long n)
{
	int	i;

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

char	*ft_itoa(int n)
{
	int		count_nb;
	int		sign;
	char	*dest;
	long	num;

	num = n;
	count_nb = count(num);
	sign = 0;
	dest = (char *)malloc(sizeof(char) * count_nb + 1);
	if (!dest)
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
		dest[count_nb--] = num % 10 + '0';
		num /= 10;
	}
	return (dest);
}
