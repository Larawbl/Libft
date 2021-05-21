/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:54:24 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 16:54:25 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*dest;
	int		i;

	dest = (char *)s;
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
