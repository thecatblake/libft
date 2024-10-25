/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:41:52 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/23 12:06:55 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi_(const char *nptr, long num)
{
	if (!ft_isdigit(*nptr))
		return (num);
	return (ft_atoi_(nptr + 1, num * 10 + (*nptr - '0')));
}

int	ft_atoi(const char *nptr)
{
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
		return (-ft_atoi_(nptr + 1, 0));
	return (ft_atoi_(nptr, 0));
}
