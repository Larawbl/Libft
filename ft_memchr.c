/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:33:39 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 16:56:28 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = 0;
	while (n > len && *str)
	{
		if (*str == c)
			return (str);
		len++;
		str++;
	}
	return (0);
}
