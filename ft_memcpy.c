/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:33:54 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 15:33:55 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	len;

	d = (char *)dest;
	s = (char *)src;
	len = 0;
	while (n > len)
	{
		*d = *s;
		d++;
		s++;
		len++;
	}
	return (dest);
}
