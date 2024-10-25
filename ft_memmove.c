/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nenmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:01:17 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/23 12:06:56 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_;
	unsigned char	*src_;

	if (src == NULL | dest == NULL)
		return (NULL);
	dest_ = (unsigned char *)dest;
	src_ = (unsigned char *)src;
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dest_[n] = src_[n];
		}
	}
	return (dest);
}
