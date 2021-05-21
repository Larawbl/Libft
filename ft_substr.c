/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:54:01 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 16:54:03 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = 0;
	if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (0);
		dest[0] = 0;
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	dest = strncpy(dest, s + start, len);
	dest[len] = 0;
	return (dest);
}
