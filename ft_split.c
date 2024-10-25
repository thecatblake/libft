/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:14:45 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/23 12:06:56 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		n++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	num;
	size_t	k;

	i = 0;
	num = find(s, c);
	split = ft_calloc(num + 1, sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (i++ < num && *s)
	{
		k = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			k++;
			s++;
		}
		if (k == 0)
			continue ;
		split[i - 1] = ft_substr(s - k, 0, k);
	}
	return (split);
}
