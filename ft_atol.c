/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 05:58:49 by rkaga             #+#    #+#             */
/*   Updated: 2025/02/02 05:58:49 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_atoi_(const char *nptr, long long num, int minus)
{
	if (!ft_isdigit(*nptr))
		return (num);
	if (minus && -1 * num < (LLONG_MIN + (*nptr - '0')) / 10)
		return (LLONG_MIN);
	if (!minus && num > (LLONG_MAX - (*nptr - '0')) / 10)
		return (LLONG_MAX);
	return (ft_atoi_(nptr + 1, num * 10 + (*nptr - '0'), minus));
}

long	ft_atol(const char *nptr)
{
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
		return (-ft_atoi_(nptr + 1, 0, 1));
	return (ft_atoi_(nptr, 0, 0));
}
