/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:18:38 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/23 12:06:56 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr_(unsigned char *s, unsigned char c, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (NULL);
	i = 0;
	while (s[i] != c && n > 1)
	{
		i++;
		n--;
	}
	if (s[i] == c)
		return ((void *)(s + i));
	return (0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	return (ft_memchr_((unsigned char *)s, (unsigned char)c, n));
}
