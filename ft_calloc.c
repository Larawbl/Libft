/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:32:23 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/21 16:33:00 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;

	if (count == 0 || size == 0)
		return (0);
	dest = malloc(sizeof(size_t) * (size * count));
	if (!dest)
		return (0);
	ft_bzero(dest, count);
	return (dest);
}
