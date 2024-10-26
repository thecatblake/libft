/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:50:12 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/26 17:53:23 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*ptr;

	len = ft_strlen(s);
	ptr = ft_calloc(len, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	return (ft_memcpy(ptr, s, len));
}
