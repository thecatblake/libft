/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:37:16 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/23 12:06:56 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	k;
	int	llen;

	llen = ft_strlen(little);
	while (*big && len > 0)
	{
		k = 0;
		while (*(big + k) == little[k] && len - k > 0)
			k++;
		if (k == llen)
			return ((char *)(big));
		big++;
		len--;
	}
	return (0);
}
