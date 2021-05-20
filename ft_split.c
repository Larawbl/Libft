/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweibel <lweibel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:08:39 by lweibel           #+#    #+#             */
/*   Updated: 2021/05/20 12:08:39 by lweibel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_word(char const *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char		**count_letters(char **dest, char const *s, char c)
{
	int i;
	int count;
	int index;

	i = 0;
	index = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		if (!(dest[index] = malloc(sizeof(char) * count + 1)))
			return (0);
		dest[index][count] = 0;
		index++;
		while (s[i] == c && s[i])
			i++;
	}
	return (dest);
}

char	**fill(char **dest, char const *s, char c)
{
	int count;
	int i;
	int index;

	i = 0;
	index = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] != c && s[i])
		{
			dest[index][count] = s[i];
			count++;
			i++;
		}
		index++;
		while (s[i] == c && s[i])
			i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int count;
	char **dest;

	i = 0;
	dest = NULL;
	while (*s == c)
		s++;
	count = count_word(s, c);
	if (!(dest = malloc(sizeof(char*) * count + 1)))
		return (0);
	dest[count] = 0;
	dest = count_letters(dest, s, c);
	dest = fill(dest, s, c);
	return (dest);
}