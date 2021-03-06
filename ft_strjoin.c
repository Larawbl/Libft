/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:52:18 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 16:56:09 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	while (s2[i++])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	len = 0;
	while (s1[len])
	{
		dest[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i])
		dest[len++] = s2[i++];
	dest[len] = 0;
	return (dest);
}
