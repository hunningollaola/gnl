/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:24:56 by gmerrell          #+#    #+#             */
/*   Updated: 2019/09/26 22:33:23 by gmerrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long int			res;
	int								i;
	long long int					sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + ((long long int)(str[i] - '0'));
		i++;
	}
	if (res >= 9223372036854775807ULL && sign > 0)
		return (-1);
	if (res >= 9223372036854775807ULL && sign < 0)
		return (0);
	return (sign * res);
}
